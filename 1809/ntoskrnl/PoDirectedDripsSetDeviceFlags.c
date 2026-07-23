/*
 * XREFs of PoDirectedDripsSetDeviceFlags @ 0x1402D6C00
 * Callers:
 *     PopDirectedDripsNotifyDeviceStarted @ 0x1406EE370 (PopDirectedDripsNotifyDeviceStarted.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x14087DF50 (PopDirectedDripsNotifyUsbDeviceStarted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoDirectedDripsSetDeviceFlags(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9

  v2 = 0;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  if ( !v3 || (a2 & 0xFFFFFFE0) != 0 )
    return (unsigned int)-1073741811;
  else
    *(_DWORD *)(v3 + 760) |= a2;
  return v2;
}
