/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C0033B14
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C0018FC0 (RaidPowerSettingCallback.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C0036270 (RaidCoalescingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( *(char *)(a1 + 108) >= 0 )
    return 3LL;
  else
    return 2 - (unsigned int)((*(_BYTE *)(a1 + 109) & 1) != 0);
}
