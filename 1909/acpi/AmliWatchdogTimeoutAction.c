/*
 * XREFs of AmliWatchdogTimeoutAction @ 0x1C0062BC4
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C0062A10 (AmliDisableWatchdog.c)
 *     AmliWatchdog @ 0x1C0062AB0 (AmliWatchdog.c)
 * Callees:
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0049418 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C0062750 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogInitiateBugcheck @ 0x1C0062B0C (AmliWatchdogInitiateBugcheck.c)
 *     AmliWatchdogInitiateLiveDump @ 0x1C0062B58 (AmliWatchdogInitiateLiveDump.c)
 */

void __fastcall AmliWatchdogTimeoutAction(__int64 a1, ULONGLONG a2)
{
  int v3; // ecx
  int v4; // ecx

  AcpiDiagTraceAmliWatchdogTimeout(a1, a2);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        AmliWatchdogInitiateBugcheck((ULONG_PTR *)a1);
      return;
    }
    AmliWatchdogInitiateLiveDump((_QWORD *)a1);
  }
  AcpiQueueRecordBlackboxInformation();
  if ( *(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    KeCancelTimer((PKTIMER)(a1 + 104));
  }
}
