/*
 * XREFs of ExSubscribeWnfStateChange @ 0x14063F220
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1402F74B4 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14073A580 (PopEsWorker.c)
 *     PnpBootPhaseComplete @ 0x140754ED4 (PnpBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x140789D6C (PopSetupMixedRealitytNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x14078A648 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x14078A684 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x14078A6C0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14078A6FC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14078A738 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x14078A774 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x1408D82C4 (RtlpCtContextInit.c)
 *     PiUEventInit @ 0x1409F90FC (PiUEventInit.c)
 *     PopNetInitialize @ 0x140A061C0 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A06D78 (PopEsInit.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A22F50 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140641914 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
