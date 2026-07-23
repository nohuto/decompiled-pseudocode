/*
 * XREFs of PnpSetDeviceClassChange @ 0x140711428
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1406C7BA0 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetDeviceClassChange(_OWORD *a1, _OWORD *a2, const void **a3)
{
  int v6; // edi
  _DWORD *DeviceEventEntry; // rax
  __int64 v8; // rbx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v6 = *(unsigned __int16 *)a3 + 80;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a3 + 192);
  v8 = (__int64)DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225495LL;
  *((_OWORD *)DeviceEventEntry + 7) = *a1;
  DeviceEventEntry[32] = 2;
  DeviceEventEntry[37] = v6;
  *((_OWORD *)DeviceEventEntry + 10) = *a2;
  memmove(DeviceEventEntry + 44, a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(v8 + 2 * ((unsigned __int64)*(unsigned __int16 *)a3 >> 1) + 176) = 0;
  return PnpInsertEventInQueue(v8);
}
