/*
 * XREFs of ExQueryWnfStateData @ 0x1406C82A0
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1402D6DA0 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1402D6E70 (PopWnfBluetoothChargingCallback.c)
 *     PopErratumUpdateCallback @ 0x1402DB9B0 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x1406DB5F0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14071ED70 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14071EF10 (PopWnfMixedRealityCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140819210 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140868F50 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x140868FF0 (PopWnfUserAwayPredictionCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140877010 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140877920 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408779B0 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfReadStateData @ 0x14060FFDC (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406C8344 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection_0(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
