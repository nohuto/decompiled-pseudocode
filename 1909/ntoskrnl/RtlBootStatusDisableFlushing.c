/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x140182504
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140759914 (PopRecordLongPowerButtonPressDetected.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401C15B0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall RtlBootStatusDisableFlushing(char a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( BootStatDisableFlush != a1 )
  {
    BootStatDisableFlush = a1;
    if ( !a1 )
    {
      if ( BootStatFileHandleAcquired )
      {
        if ( BootStatFileHandle )
          return ZwFlushBuffersFile(BootStatFileHandle, &IoStatusBlock);
      }
    }
  }
  return result;
}
