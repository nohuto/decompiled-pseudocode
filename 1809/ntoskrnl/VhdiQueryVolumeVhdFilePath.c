/*
 * XREFs of VhdiQueryVolumeVhdFilePath @ 0x1409F9C84
 * Callers:
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401B8270 (ZwDeviceIoControlFile.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

PVOID __fastcall VhdiQueryVolumeVhdFilePath(HANDLE FileHandle)
{
  SIZE_T OutputBufferLength; // rsi
  SIZE_T i; // rdx
  NTSTATUS v5; // eax
  PVOID OutputBuffer; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( !FileHandle )
    return 0LL;
  LODWORD(OutputBufferLength) = 520;
  for ( i = 520LL; ; i = OutputBufferLength )
  {
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x42646856u);
    if ( !OutputBuffer )
      break;
    v5 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D5928u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    if ( v5 != -1073741789 )
      goto LABEL_8;
    ExFreePoolWithTag(OutputBuffer, 0x42646856u);
    OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
  }
  v5 = -1073741801;
LABEL_8:
  if ( v5 < 0 )
  {
    if ( OutputBuffer )
    {
      ExFreePoolWithTag(OutputBuffer, 0x42646856u);
      return 0LL;
    }
  }
  return OutputBuffer;
}
