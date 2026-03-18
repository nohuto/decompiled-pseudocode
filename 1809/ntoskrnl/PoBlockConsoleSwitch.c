/*
 * XREFs of PoBlockConsoleSwitch @ 0x1406DDC30
 * Callers:
 *     PoPowerOffMonitor @ 0x140142C88 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x14057A1E0 (PnprQuiesceDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 *     PopBlockSessionSwitch @ 0x1406DDB50 (PopBlockSessionSwitch.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140867FDC (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     PopDispatchStateCallout @ 0x1406DDC80 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  int ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
