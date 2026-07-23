/*
 * XREFs of KdPullRemoteFile @ 0x14091A67C
 * Callers:
 *     MiCreateSectionForDriver @ 0x140683460 (MiCreateSectionForDriver.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KdpCloseRemoteFile @ 0x14091A914 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14091AA60 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14091AC68 (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFile(UNICODE_STRING *a1, __int64 a2, __int64 a3, ULONG a4)
{
  PVOID PoolWithTag; // r14
  NTSTATUS RemoteFile; // ebx
  LARGE_INTEGER v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  LARGE_INTEGER v11; // r15
  int v12; // r9d
  ULONG_PTR v13; // r12
  NTSTATUS v14; // eax
  __int64 v15; // [rsp+68h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-21h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  ULONG Length; // [rsp+110h] [rbp+7Fh] BYREF

  Length = a4;
  FileHandle = 0LL;
  v15 = 0LL;
  if ( KdPitchDebugger )
    return 3221226324LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x6F49644Bu);
  if ( !PoolWithTag )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v15, &v18, a1);
  if ( RemoteFile >= 0 )
  {
    memmove(PoolWithTag, a1->Buffer, a1->Length);
    *((_WORD *)PoolWithTag + ((unsigned __int64)a1->Length >> 1)) = 0;
    v8.QuadPart = v18;
    DbgPrintEx(
      0,
      0,
      "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
      KeGetCurrentThread(),
      (const wchar_t *)PoolWithTag,
      v18);
    ByteOffset = v8;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RemoteFile = ZwCreateFile(
                   &FileHandle,
                   0x120116u,
                   &ObjectAttributes,
                   &IoStatusBlock,
                   &ByteOffset,
                   0x80u,
                   0,
                   5u,
                   CmStateSeparationEnabled != 0 ? 524320 : 32,
                   0LL,
                   0);
    DbgPrintEx(
      0,
      0,
      "KdPullRemoteFile(%p): Return from ZwCreateFile with status %x\n",
      KeGetCurrentThread(),
      RemoteFile);
    if ( RemoteFile >= 0 )
    {
      v10 = v18;
      v11.QuadPart = 0LL;
      if ( v18 )
      {
        v9 = v15;
        while ( 1 )
        {
          v12 = v10;
          if ( v10 > 0x2000 )
            v12 = 0x2000;
          RemoteFile = KdpReadRemoteFile(v9, v11.LowPart, (_DWORD)PoolWithTag, v12, (__int64)&Length);
          if ( RemoteFile < 0 )
            goto LABEL_9;
          v13 = Length;
          if ( !Length )
            goto LABEL_9;
          ByteOffset = v11;
          v14 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &ByteOffset, 0LL);
          RemoteFile = v14;
          if ( v14 < 0 )
          {
            DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file write failed, 0x%08x\n", v14);
            goto LABEL_9;
          }
          if ( IoStatusBlock.Information < v13 )
          {
            RemoteFile = -1073741823;
            goto LABEL_9;
          }
          v11.QuadPart += IoStatusBlock.Information;
          v10 -= IoStatusBlock.Information;
          if ( !v10 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file open failed, 0x%08x\n", RemoteFile);
    }
  }
  v9 = v15;
LABEL_9:
  if ( v9 )
    KdpCloseRemoteFile(v9);
  if ( FileHandle )
    ZwClose(FileHandle);
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)RemoteFile;
}
