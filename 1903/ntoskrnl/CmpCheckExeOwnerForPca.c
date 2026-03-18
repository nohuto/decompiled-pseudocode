/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x1405B0554
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcess @ 0x14012AA90 (PsGetCurrentThreadProcess.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQuerySecurityObject @ 0x1406197CC (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x140619870 (PsReferenceProcessFilePointer.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406D21D0 (RtlGetOwnerSecurityDescriptor.c)
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
