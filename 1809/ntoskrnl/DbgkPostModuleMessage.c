/*
 * XREFs of DbgkPostModuleMessage @ 0x14026DAB4
 * Callers:
 *     DbgkPostEnclaveModuleMessages @ 0x14026DA38 (DbgkPostEnclaveModuleMessages.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     DbgkpPostModuleMessages @ 0x1408103A4 (DbgkpPostModuleMessages.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 *     MmGetFileNameForAddress @ 0x14084CEB0 (MmGetFileNameForAddress.c)
 */

NTSTATUS __fastcall DbgkPostModuleMessage(
        PVOID Object,
        PVOID a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        PRKEVENT a6)
{
  NTSTATUS v10; // eax
  HANDLE v11; // r8
  NTSTATUS result; // eax
  _BYTE v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v17[34]; // [rsp+80h] [rbp-80h] BYREF

  memset(v17, 0, sizeof(v17));
  LODWORD(v17[5]) = 5;
  v17[7] = a3;
  v17[8] = (HANDLE)__PAIR64__(a5, a4);
  if ( (int)MmGetFileNameForAddress(a3, v13) >= 0 )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenFile(&v17[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
    v11 = v17[6];
    if ( v10 < 0 )
      v11 = 0LL;
    v17[6] = v11;
    ExFreePoolWithTag(P, 0);
  }
  if ( a6 )
  {
    result = DbgkpQueueMessage(Object, a2, a6);
  }
  else
  {
    DbgkpSendApiMessage(Object);
    result = -1073741823;
  }
  if ( result < 0 )
  {
    if ( v17[6] )
      return ObCloseHandle(v17[6], 0);
  }
  return result;
}
