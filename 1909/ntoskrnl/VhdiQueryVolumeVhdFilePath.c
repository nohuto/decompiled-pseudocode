/*
 * XREFs of VhdiQueryVolumeVhdFilePath @ 0x140A3F650
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140A3EE10 (VhdiInitializeBootDisk.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ZwDeviceIoControlFile @ 0x1401C0D30 (ZwDeviceIoControlFile.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall VhdiQueryVolumeVhdFilePath(HANDLE FileHandle)
{
  ULONG_PTR result; // rax
  ULONG OutputBufferLength; // edi
  PVOID OutputBuffer; // rax
  ULONG_PTR v5; // rbx
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  result = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( FileHandle )
  {
    for ( OutputBufferLength = 520; ; OutputBufferLength *= 2 )
    {
      OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
      v5 = (ULONG_PTR)OutputBuffer;
      if ( !OutputBuffer )
        break;
      v6 = ZwDeviceIoControlFile(
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
      if ( v6 != -1073741789 )
        goto LABEL_7;
      ExFreeHeapPool(v5);
    }
    v6 = -1073741801;
LABEL_7:
    if ( v6 < 0 )
    {
      if ( v5 )
      {
        ExFreeHeapPool(v5);
        return 0LL;
      }
    }
    return v5;
  }
  return result;
}
