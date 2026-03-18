/*
 * XREFs of ExQueryWnfStateData @ 0x1406E8D40
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1402F1A20 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1402F1B00 (PopWnfBluetoothChargingCallback.c)
 *     PopErratumUpdateCallback @ 0x1402F7580 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x14071E1F0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1407473D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x140747D30 (PopWnfMixedRealityCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140853310 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14085D400 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A5560 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408A5600 (PopWnfUserAwayPredictionCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408B42F0 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408B4990 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408B4A60 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x1406428CC (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406E8DE4 (ExpWnfAcquireSubscriptionNameInstance.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
