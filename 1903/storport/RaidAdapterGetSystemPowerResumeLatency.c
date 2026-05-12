/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C0033B34
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C0018FC0 (RaidPowerSettingCallback.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C0036270 (RaidCoalescingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
