/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C00607D0
 * Callers:
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C0060A8C (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0060C48 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C007F940) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
