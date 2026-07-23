/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1401786EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140746338 (PopRecordLongPowerButtonPressDetected.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401B8C50 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall RtlBootStatusDisableFlushing(char a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  BootStatDisableFlush = a1;
  if ( !a1 && BootStatFileHandleAcquired )
  {
    if ( BootStatFileHandle )
      return ZwFlushBuffersFile(BootStatFileHandle, &IoStatusBlock);
  }
  return result;
}
