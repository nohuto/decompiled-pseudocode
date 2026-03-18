/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1407268A4
 * Callers:
 *     PoPowerOffMonitor @ 0x14015E574 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1405AAB40 (PnprWakeDevices.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A3E50 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
