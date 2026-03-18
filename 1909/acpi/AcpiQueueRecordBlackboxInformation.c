/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C0062750
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C0062A10 (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0062BC4 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C0081940) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
