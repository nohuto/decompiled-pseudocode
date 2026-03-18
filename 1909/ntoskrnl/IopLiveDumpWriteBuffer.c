/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x140859DA8
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140859E68 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A094 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14085A7CC (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     ZwWriteFile @ 0x1401C0D50 (ZwWriteFile.c)
 *     SecureDump_Encrypt_DmpData @ 0x14029B760 (SecureDump_Encrypt_DmpData.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  __int64 v6; // rdi
  __int64 result; // rax
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v6 = Length;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !*(_BYTE *)(a5 + 656)
    || a6
    || (result = SecureDump_Encrypt_DmpData((__int64)Buffer, Length, (__int64)Buffer, Length, (unsigned __int64 *)&a5),
        (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v6, ByteOffset, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        ByteOffset->QuadPart += v6;
    }
    return (unsigned int)Status;
  }
  return result;
}
