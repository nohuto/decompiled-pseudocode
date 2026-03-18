/*
 * XREFs of FreeDataBuffs @ 0x1C0013E30
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C00064B0 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0007E58 (ACPIThermalGetSensorDevice.c)
 *     ACPIIoctlEnumChildren @ 0x1C000819C (ACPIIoctlEnumChildren.c)
 *     ACPIThermalTMPCallback @ 0x1C00086D0 (ACPIThermalTMPCallback.c)
 *     ACPIInitDosDeviceName @ 0x1C000B17C (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000DAA0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000F4D0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F920 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000FC40 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FE30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ProcessIncDec @ 0x1C0011BE0 (ProcessIncDec.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0015320 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249A0 (ACPIGetWorkerForInteger.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0029D20 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002A2F0 (ACPIGetWorkerForBuffer.c)
 *     ACPIGetWorkerForData @ 0x1C002A810 (ACPIGetWorkerForData.c)
 *     ConvertToInteger @ 0x1C002AB2C (ConvertToInteger.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002CC78 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002F530 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForNothing @ 0x1C00302D0 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B6D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BAA0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C0054FC0 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0056F38 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0057180 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C0063450 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C00653C4 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C0067BB4 (FreeContext.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     Match_32 @ 0x1C00695B4 (Match_32.c)
 *     Match_64 @ 0x1C00696D4 (Match_64.c)
 *     ConvertToBuffer @ 0x1C006AD38 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006AE6C (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C006B790 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE954 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v3 = a2;
    do
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v5 & 8) != 0 )
          FreeData((_QWORD *)v5);
      }
      else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
      {
        if ( *(_WORD *)(a1 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
        FreeObjData(a1);
      }
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
