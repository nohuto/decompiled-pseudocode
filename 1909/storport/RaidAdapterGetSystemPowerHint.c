/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C0034F04
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001D470 (RaidPowerSettingCallback.c)
 *     RaidCoalescingCallback @ 0x1C0037660 (RaidCoalescingCallback.c)
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
