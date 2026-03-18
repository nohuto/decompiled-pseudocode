/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140589E14
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400039AC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x1402DB790 (PopCoalescingSetActiveState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopUpdateConsoleDisplayState @ 0x14071C278 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140762A50 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140762D20 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x14086EE60 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x14086F288 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x140003A5C (PopDeepSleepEnabled.c)
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140005DA8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402D3E1C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402DB8B0 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140418254 )
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
      if ( byte_140418254 && !PopDeepSleepEnabled() )
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
