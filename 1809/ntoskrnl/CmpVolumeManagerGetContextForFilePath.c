/*
 * XREFs of CmpVolumeManagerGetContextForFilePath @ 0x14075AA00
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x14075A7D4 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405A5298 (CmpVolumeManagerGetContextForFile.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFilePath(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        PPRIVILEGE_SET *a4)
{
  __int64 v5; // rcx
  int ContextForFile; // ebx
  __int64 v7; // r8
  struct _IO_STATUS_BLOCK v9; // [rsp+60h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES v10; // [rsp+70h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+8h] BYREF

  Handle = 0LL;
  v10.RootDirectory = 0LL;
  v10.ObjectName = a2;
  v10.Length = 48;
  v10.Attributes = 576;
  *(_OWORD *)&v10.SecurityDescriptor = 0LL;
  ContextForFile = ZwCreateFile(&Handle, 0x80u, &v10, &v9, 0LL, 0, 7u, 1u, 0, 0LL, 0);
  if ( ContextForFile >= 0 )
    ContextForFile = CmpVolumeManagerGetContextForFile(v5, Handle, v7, a4);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ContextForFile;
}
