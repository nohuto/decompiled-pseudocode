/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406BC490
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1402DB8E4 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14071C8A0 (PopEsWorker.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407631A0 (PopSetupMixedRealitytNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140763CB8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140763CF4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140763D30 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140763D6C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140763DA8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x140763DE4 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x1408997A8 (RtlpCtContextInit.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 *     PiUEventInit @ 0x1409C8230 (PiUEventInit.c)
 *     VslRegisterIumPowerCallbacks @ 0x1409DF644 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14060F054 (ExpWnfSubscribeWnfStateChange.c)
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
