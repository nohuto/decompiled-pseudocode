/*
 * XREFs of PoUnblockConsoleSwitch @ 0x140724A04
 * Callers:
 *     PoPowerOffMonitor @ 0x14015DED4 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1405AAB60 (PnprWakeDevices.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A4610 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
