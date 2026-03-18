/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140098ED8
 * Callers:
 *     PoGetIdleTimes @ 0x140004998 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140132310 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x14019415C (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x140194834 (PpmCheckArmPeriod.c)
 *     PpmHeteroHgsBackupInit @ 0x14019D188 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x1402F0570 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402F0900 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402F0B40 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x1402FF644 (PpmCapturePerformanceDistribution.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 *     PpmUpdateProcessorPolicy @ 0x14074760C (PpmUpdateProcessorPolicy.c)
 *     PpmUpdateIdleStates @ 0x14075EFB0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14075F0A8 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140776FA8 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x14078CE60 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x1408A3090 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x1408B3670 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x1408B662C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x14009A8B8 (PopQueueTargetDpc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-41h] BYREF
  __int16 v12; // [rsp+60h] [rbp-31h]
  int v13; // [rsp+62h] [rbp-2Fh]
  __int16 v14; // [rsp+66h] [rbp-2Bh]
  __int64 v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  __int64 *p_Object; // [rsp+80h] [rbp-11h]
  _QWORD *v19; // [rsp+88h] [rbp-9h]
  unsigned int v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+94h] [rbp+3h]
  struct _KDPC Dpc; // [rsp+98h] [rbp+7h] BYREF

  v21 = 0;
  memset(&Dpc, 0, sizeof(Dpc));
  v13 = 0;
  v10[1] = v10;
  v14 = 0;
  v10[0] = v10;
  v11[1] = *(_QWORD *)(a1 + 8);
  v19 = v11;
  p_Object = &Object;
  Object = 393217LL;
  v12 = 0;
  v11[0] = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v20 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v20;
}
