/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C000FA30
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000DAA0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000F4D0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000F6E0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F7E0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F920 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00101E0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0015320 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C00159C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0015C50 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0016260 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C0016450 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C00268E0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0027800 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0029D20 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002DD00 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002E330 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002EEB0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002F530 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002FA40 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildCompleteGeneric @ 0x1C002FBA0 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C004AF40 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C004B040 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004BD00 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl
  int v3; // edx

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v3 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v3;
  if ( (v3 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v3 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}
