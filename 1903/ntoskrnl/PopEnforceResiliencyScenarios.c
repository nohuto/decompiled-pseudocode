/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x1407296C4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x1400ED4E8 (PopDeepSleepEnabled.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400ED808 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400EDAE4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     KeSetMaxDynamicTickDuration @ 0x1402A5C04 (KeSetMaxDynamicTickDuration.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402F7480 (PopEnsureCoalescingWorkerWillRun.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  char v2; // r8
  int v3; // r9d
  int v4; // ecx

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  if ( PopDeepSleepEnabled() && PopPdcIdleResiliency )
    v2 = 1;
  if ( !v3 )
  {
    if ( !v2 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( v2 )
  {
LABEL_12:
    if ( PopDeepSleepEnforced )
    {
      KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
      PopDeepSleepEnforced = 0;
      PopDeepSleepSetDisengageReason(0);
      if ( !byte_140443C14 )
        PopDeepSleepSetDisengageReason(1u);
    }
    goto LABEL_6;
  }
  if ( !PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration((unsigned int)(10000000 * v3));
    PopDeepSleepEnforced = 1;
    PopDeepSleepClearDisengageReason(0);
    PopDeepSleepClearDisengageReason(1u);
  }
LABEL_6:
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  v4 = *a1;
  if ( *a1 )
  {
    if ( !PopCurrentCoalescingSpindownTimeout )
    {
      PopCoalescingState |= 2u;
      PopCoalescingEnforced = 1;
      PopEnforcedCoalescingSpindownTimeout = v4;
LABEL_19:
      PopEnsureCoalescingWorkerWillRun();
    }
  }
  else if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingState &= ~2u;
    PopCoalescingEnforced = 0;
    goto LABEL_19;
  }
}
