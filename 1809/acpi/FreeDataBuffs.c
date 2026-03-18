/*
 * XREFs of FreeDataBuffs @ 0x1C0002E30
 * Callers:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C001011C (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001174C (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     ACPIThermalTMPCallback @ 0x1C0012000 (ACPIThermalTMPCallback.c)
 *     ACPIIoctlEnumChildren @ 0x1C001365C (ACPIIoctlEnumChildren.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00152A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015480 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIInitDosDeviceName @ 0x1C00166A4 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019BE0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019D80 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A1A0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001E8C0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EB30 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026500 (ACPIGetWorkerForInteger.c)
 *     ProcessIncDec @ 0x1C002A1D0 (ProcessIncDec.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002A290 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002A6F0 (ACPIGetWorkerForBuffer.c)
 *     ACPIGetWorkerForData @ 0x1C002AA60 (ACPIGetWorkerForData.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C3CC (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002E710 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForNothing @ 0x1C002F650 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A010 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004A3C0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C00535C0 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0055468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C00556B0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C00614D0 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C0063414 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C0065B50 (FreeContext.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     Match_32 @ 0x1C0067554 (Match_32.c)
 *     Match_64 @ 0x1C0067674 (Match_64.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0068E18 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 *     ParseNestedContext @ 0x1C0069730 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
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
          FreeData();
      }
      else if ( *(_QWORD *)(a1 + 32) )
      {
        if ( *(int *)(a1 + 8) > 0 )
        {
          *(_WORD *)a1 |= 8u;
        }
        else
        {
          if ( *(_WORD *)(a1 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
          FreeObjData(a1);
        }
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
