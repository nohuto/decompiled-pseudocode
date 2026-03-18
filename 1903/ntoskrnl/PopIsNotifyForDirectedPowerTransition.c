/*
 * XREFs of PopIsNotifyForDirectedPowerTransition @ 0x14015EC84
 * Callers:
 *     PopWakeDeviceList @ 0x14015E824 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14015EA10 (PopSleepDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsNotifyForDirectedPowerTransition(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (PopCurrentBroadcast & 0x80000000000000LL) != 0 && *(_QWORD *)(a1 - 64) && (*(_DWORD *)(a1 + 616) & 0x10000) != 0 )
    return (*(_DWORD *)(a1 + 616) & 0x20000) == 0;
  return v1;
}
