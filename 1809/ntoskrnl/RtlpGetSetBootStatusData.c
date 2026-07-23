/*
 * XREFs of RtlpGetSetBootStatusData @ 0x140719BB4
 * Callers:
 *     RtlGetSetBootStatusData @ 0x140719A60 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x1401B83B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwFlushBuffersFile @ 0x1401B8C50 (ZwFlushBuffersFile.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlBootStatusItemInfo @ 0x140719D78 (RtlBootStatusItemInfo.c)
 *     RtlpRecordBootStatusData @ 0x140719DB0 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(
        HANDLE FileHandle,
        char a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6)
{
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  __int64 Length; // r15
  __int64 v13; // rcx
  ULONG Size; // [rsp+50h] [rbp-30h] BYREF
  unsigned int Size_4; // [rsp+54h] [rbp-2Ch] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK v18; // [rsp+70h] [rbp-10h] BYREF

  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Size_4, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlBootStatusItemInfo(a3, &ByteOffset, &Size);
    v11 = result;
    if ( result >= 0 )
    {
      ByteOffset.HighPart = 0;
      Length = Size;
      if ( Size + (unsigned __int64)ByteOffset.LowPart > Size_4 )
      {
        return -1073741735;
      }
      else if ( a5 < Size )
      {
        return -1073741789;
      }
      else
      {
        if ( a2 )
        {
          if ( BootStatFileHandleAcquired && BootStatFileHandle == FileHandle && BootStatDataCache )
          {
            IoStatusBlock.Information = Size;
            memmove(a4, (char *)BootStatDataCache + ByteOffset.LowPart, Size);
          }
          else
          {
            v11 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Size, &ByteOffset, 0LL);
          }
        }
        else
        {
          if ( BootStatFileHandleAcquired && BootStatFileHandle == FileHandle && BootStatDataCache )
            memmove((char *)BootStatDataCache + ByteOffset.LowPart, a4, Size);
          v11 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
          if ( v11 >= 0 && !BootStatDisableFlush )
            v11 = ZwFlushBuffersFile(FileHandle, &v18);
          LOBYTE(v13) = 1;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlpRecordBootStatusData)(
            v13,
            a4,
            (LARGE_INTEGER)ByteOffset.QuadPart,
            Length);
        }
        if ( v11 >= 0 )
        {
          if ( a6 )
            *a6 = IoStatusBlock.Information;
        }
        return v11;
      }
    }
  }
  return result;
}
