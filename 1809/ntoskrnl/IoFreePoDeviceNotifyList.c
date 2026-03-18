/*
 * XREFs of IoFreePoDeviceNotifyList @ 0x14056D534
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PoClearBroadcast @ 0x1406E0A68 (PoClearBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140135370 (PnpUnlockDeviceActionQueue.c)
 *     IopFreePoDeviceNotifyListHead @ 0x14056D5B0 (IopFreePoDeviceNotifyListHead.c)
 *     PipClearDeviceTreeStateFlags @ 0x1405796E0 (PipClearDeviceTreeStateFlags.c)
 */

__int64 __fastcall IoFreePoDeviceNotifyList(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
  {
    v2 = a1 + 40;
    v3 = 5LL;
    do
    {
      IopFreePoDeviceNotifyListHead(v2 - 16);
      IopFreePoDeviceNotifyListHead(v2);
      IopFreePoDeviceNotifyListHead(v2 + 16);
      IopFreePoDeviceNotifyListHead(v2 + 32);
      v2 += 72LL;
      --v3;
    }
    while ( v3 );
    if ( (*(_DWORD *)(a1 + 376) & 2) != 0 )
      PipClearDeviceTreeStateFlags(49152LL);
    *(_BYTE *)a1 = 0;
    return PnpUnlockDeviceActionQueue();
  }
  return result;
}
