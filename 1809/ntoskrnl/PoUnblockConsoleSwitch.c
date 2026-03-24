/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1406DDBAC
 * Callers:
 *     PoPowerOffMonitor @ 0x140142CA8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x14057ACE0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 16) = 7;
  return PopDispatchStateCallout(a1, &v3);
}
