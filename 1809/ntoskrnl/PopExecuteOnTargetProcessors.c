/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x1400A5E08
 * Callers:
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131D74 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x140189E9C (PpmCheckArmPeriod.c)
 *     PpmHeteroHgsBackupInit @ 0x140192B80 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x1402D6310 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402D66D0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402D6900 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E307C (PpmCapturePerformanceDistribution.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PpmUpdateProcessorPolicy @ 0x14071DDD8 (PpmUpdateProcessorPolicy.c)
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 *     PpmUpdateIdleStates @ 0x14072A820 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14072A904 (PpmIdleRegisterDefaultStates.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140750450 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x1408685A0 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x140877D30 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14087BA08 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x1400A5F00 (PopQueueTargetDpc.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 Object; // [rsp+30h] [rbp-49h] BYREF
  char v6; // [rsp+32h] [rbp-47h]
  int v7; // [rsp+34h] [rbp-45h]
  _QWORD v8[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v10; // [rsp+58h] [rbp-21h]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int16 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  Object = 1;
  v6 = 6;
  v8[1] = v8;
  v8[0] = v8;
  v9[1] = *(_QWORD *)(a1 + 8);
  v15 = v9;
  v9[0] = a1;
  v11 = a2;
  p_Object = &Object;
  v7 = 0;
  v10 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
