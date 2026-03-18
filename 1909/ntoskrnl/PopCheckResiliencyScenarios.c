/*
 * XREFs of PopCheckResiliencyScenarios @ 0x14069EB24
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400D5F84 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x1402F6E08 (PopCoalescingSetActiveState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x14078B9D0 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14078BCA0 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1408AB250 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400F09A4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PopDeepSleepEnabled @ 0x1400F0C78 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402EE360 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402F6F30 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // cl

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_140443B94 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_140443B94 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
