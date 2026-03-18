/*
 * XREFs of IopFileUtilRename @ 0x140A1D96C
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x140A1D7D8 (PpLastGoodDoBootProcessing.c)
 *     PiLastGoodRevertCopyCallback @ 0x140A3AB10 (PiLastGoodRevertCopyCallback.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopFileUtilClearAttributes @ 0x1405B4BBC (IopFileUtilClearAttributes.c)
 */

__int64 __fastcall IopFileUtilRename(UNICODE_STRING *a1, UNICODE_STRING *a2, char a3)
{
  __int64 Length; // rdx
  _QWORD *PoolWithTag; // rdi
  NTSTATUS v8; // esi
  int v10; // r9d
  unsigned int v11; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+28h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Length = a2->Length;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length + 24, 0x75466F49u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a3 )
    IopFileUtilClearAttributes(a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenFile(&FileHandle, 0x110080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204022u);
  if ( v8 >= 0 )
  {
    memmove((char *)PoolWithTag + 20, a2->Buffer, a2->Length);
    PoolWithTag[1] = 0LL;
    *(_BYTE *)PoolWithTag = a3;
    v10 = a2->Length;
    *((_DWORD *)PoolWithTag + 4) = v10;
    v11 = ZwSetInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, v10 + 24, FileRenameInformation);
    ExFreePoolWithTag(PoolWithTag, 0);
    ZwClose(FileHandle);
    return v11;
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v8;
  }
}
