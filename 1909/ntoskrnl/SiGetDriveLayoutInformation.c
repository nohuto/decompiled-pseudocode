/*
 * XREFs of SiGetDriveLayoutInformation @ 0x14072C80C
 * Callers:
 *     SiGetBiosSystemPartition @ 0x14072C6D8 (SiGetBiosSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x1409329A0 (SiGetEfiSystemDevice.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401C0D30 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SiOpenDevice @ 0x1405B2410 (SiOpenDevice.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(const WCHAR *a1, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  ULONG OutputBufferLength; // esi
  PVOID OutputBuffer; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
  {
    OutputBufferLength = 18480;
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, 0x4830uLL, 0x4B505953u);
    v6 = OutputBuffer;
    if ( OutputBuffer )
    {
      while ( 1 )
      {
        v7 = ZwDeviceIoControlFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x70050u,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength);
        v3 = v7;
        if ( v7 != -1073741789 )
          break;
        ExFreePoolWithTag(v6, 0);
        OutputBufferLength += 9216;
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B505953u);
        v6 = OutputBuffer;
        if ( !OutputBuffer )
        {
          v3 = -1073741670;
          goto LABEL_8;
        }
      }
      if ( v7 < 0 )
        goto LABEL_9;
      *a2 = v6;
LABEL_8:
      if ( v3 >= 0 )
        goto LABEL_11;
LABEL_9:
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v3 = -1073741670;
    }
  }
LABEL_11:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
