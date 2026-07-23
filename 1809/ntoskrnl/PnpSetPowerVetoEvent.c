/*
 * XREFs of PnpSetPowerVetoEvent @ 0x1408347EC
 * Callers:
 *     IoNotifyPowerOperationVetoed @ 0x140826E80 (IoNotifyPowerOperationVetoed.c)
 *     IopWarmEjectDevice @ 0x14083E0B4 (IopWarmEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1406C7BA0 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetPowerVetoEvent(int a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, const void **a6)
{
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r15d
  _DWORD *DeviceEventEntry; // rdi
  unsigned __int64 v13; // rax
  char *v14; // rbx
  GUID v15; // xmm0

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v9 = *(_QWORD *)(a4[39] + 40LL);
  if ( !v9 )
    return 3221225712LL;
  if ( a6 )
    v10 = *(unsigned __int16 *)a6;
  else
    v10 = 0;
  v11 = v10 + *(unsigned __int16 *)(v9 + 40) + 84;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)(v11 + 112));
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(a4, 0x56706E50u);
  DeviceEventEntry[40] = a5;
  *((_QWORD *)DeviceEventEntry + 3) = 0LL;
  DeviceEventEntry[37] = v11;
  *((_QWORD *)DeviceEventEntry + 19) = a4;
  *((_QWORD *)DeviceEventEntry + 17) = 0LL;
  memmove(DeviceEventEntry + 41, *(const void **)(v9 + 48), *(unsigned __int16 *)(v9 + 40));
  v13 = (unsigned __int64)*(unsigned __int16 *)(v9 + 40) >> 1;
  *((_WORD *)DeviceEventEntry + v13 + 82) = 0;
  if ( a6 )
  {
    v14 = (char *)DeviceEventEntry + 2 * v13;
    memmove(v14 + 166, a6[1], *(unsigned __int16 *)a6);
    *(_WORD *)&v14[2 * ((unsigned __int64)*(unsigned __int16 *)a6 >> 1) + 166] = 0;
  }
  if ( a1 == 7 )
  {
    v15 = GUID_DEVICE_WARM_EJECT_VETOED;
  }
  else if ( a1 == 3 )
  {
    v15 = GUID_DEVICE_HIBERNATE_VETOED;
  }
  else
  {
    v15 = GUID_DEVICE_STANDBY_VETOED;
  }
  DeviceEventEntry[32] = 6;
  *((GUID *)DeviceEventEntry + 7) = v15;
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
