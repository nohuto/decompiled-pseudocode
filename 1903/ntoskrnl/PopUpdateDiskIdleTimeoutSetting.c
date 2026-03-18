/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14076A398
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402F7358 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x14074A290 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140789840 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A15358 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
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
