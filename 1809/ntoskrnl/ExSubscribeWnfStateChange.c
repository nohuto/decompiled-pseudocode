/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406BD710
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1402DBBD4 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14071DB20 (PopEsWorker.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x140764370 (PopSetupMixedRealitytNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140764E88 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140764EC4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140764F00 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140764F3C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140764F78 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x140764FB4 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x14089A9E8 (RtlpCtContextInit.c)
 *     PopNetInitialize @ 0x1409B3AB4 (PopNetInitialize.c)
 *     PiUEventInit @ 0x1409C9230 (PiUEventInit.c)
 *     VslRegisterIumPowerCallbacks @ 0x1409E0644 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140610054 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
