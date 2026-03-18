/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140758BD0
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402F6E08 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x14075A890 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14078BCA0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x1409FBB04 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4LL, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
