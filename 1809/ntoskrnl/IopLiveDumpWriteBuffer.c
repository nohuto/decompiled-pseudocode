/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x140821818
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1408218CC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140821AF8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14082220C (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     SecureDump_Encrypt_DmpData @ 0x140286890 (SecureDump_Encrypt_DmpData.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v7 = Length;
  if ( !*(_BYTE *)(a5 + 640)
    || a6
    || (result = SecureDump_Encrypt_DmpData((__int64)Buffer, Length, (__int64)Buffer, Length, (unsigned __int64 *)&a5),
        (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v7, ByteOffset, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        ByteOffset->QuadPart += v7;
    }
    return (unsigned int)Status;
  }
  return result;
}
