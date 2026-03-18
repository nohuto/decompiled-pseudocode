/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1406A0614
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400ED42C (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x1402F7358 (PopCoalescingSetActiveState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopUpdateConsoleDisplayState @ 0x14073A74C (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140789570 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140789840 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1408AB9F0 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x1400ED4E8 (PopDeepSleepEnabled.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400ED808 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400EDAE4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402EE600 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402F7480 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140443C14 )
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
      if ( byte_140443C14 && !PopDeepSleepEnabled() )
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
