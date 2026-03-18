/*
 * XREFs of SiGetDiskPartitionInformation @ 0x1406D36BC
 * Callers:
 *     SiValidateSystemPartition @ 0x1401292C4 (SiValidateSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     SiOpenDevice @ 0x1405B2034 (SiOpenDevice.c)
 */

__int64 __fastcall SiGetDiskPartitionInformation(const WCHAR *a1, void *a2)
{
  NTSTATUS v3; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
    v3 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, a2, 0x90u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
