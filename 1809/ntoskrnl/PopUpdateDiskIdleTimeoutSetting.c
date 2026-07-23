/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140749198
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402DBA80 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140747F90 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140763EF0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x1409D2E34 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
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
