/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C0037F4C
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001F240 (RaidPowerSettingCallback.c)
 *     RaidCoalescingCallback @ 0x1C003A550 (RaidCoalescingCallback.c)
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
