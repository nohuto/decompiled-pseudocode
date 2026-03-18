/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140652D70
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1402F6F64 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14073C810 (PopEsWorker.c)
 *     PnpBootPhaseComplete @ 0x140755964 (PnpBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x14078C1CC (PopSetupMixedRealitytNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x14078CAE8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x14078CB24 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x14078CB60 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14078CB9C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14078CBD8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x14078CC14 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x1408D7BC4 (RtlpCtContextInit.c)
 *     PiUEventInit @ 0x1409F900C (PiUEventInit.c)
 *     PopNetInitialize @ 0x140A066DC (PopNetInitialize.c)
 *     PopEsInit @ 0x140A07294 (PopEsInit.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A23030 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140655464 (ExpWnfSubscribeWnfStateChange.c)
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
