/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1401785EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x14056C5F0 (PopUnlockAfterSleepWorker.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140745148 (PopRecordLongPowerButtonPressDetected.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401B8AF0 (ZwFlushBuffersFile.c)
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
