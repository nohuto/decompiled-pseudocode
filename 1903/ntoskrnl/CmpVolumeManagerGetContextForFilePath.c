/*
 * XREFs of CmpVolumeManagerGetContextForFilePath @ 0x140780038
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x14077FE28 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140661390 (CmpVolumeManagerGetContextForFile.c)
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
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.ObjectName = a2;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ContextForFile = ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0, 0LL, 0);
  if ( ContextForFile >= 0 )
    ContextForFile = CmpVolumeManagerGetContextForFile(v5, FileHandle, v7, a4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)ContextForFile;
}
