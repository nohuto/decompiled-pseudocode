/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x14058193C
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x140650FB4 (ObQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 */

char CmpCheckExeOwnerForPca()
{
  _KPROCESS *CurrentThreadProcess; // rax
  PVOID v1; // rcx
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  int SecurityObject; // ebx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( !CmpTrustedInstallerSid )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer(CurrentThreadProcess, &Object) < 0 )
    return 0;
  if ( (unsigned int)ObQuerySecurityObject((_DWORD)Object, 1, 0, 0, (__int64)&NumberOfBytes) != -1073741789 )
  {
    v1 = Object;
LABEL_5:
    ObfDereferenceObject(v1);
    return 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
  v1 = Object;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_5;
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 1, (_DWORD)PoolWithTag, NumberOfBytes, (__int64)&NumberOfBytes);
  ObfDereferenceObject(Object);
  if ( SecurityObject >= 0
    && RtlGetOwnerSecurityDescriptor(v3, &Object, (PBOOLEAN)&NumberOfBytes) >= 0
    && (!Object || !RtlEqualSid(CmpTrustedInstallerSid, Object)) )
  {
    ExFreePoolWithTag(v3, 0);
    return 1;
  }
  ExFreePoolWithTag(v3, 0);
  return 0;
}
