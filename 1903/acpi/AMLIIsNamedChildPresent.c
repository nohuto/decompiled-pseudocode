/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C0015950
 * Callers:
 *     ACPIBuildPdo @ 0x1C000B7D4 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000DAA0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     GetPciAddressWorker @ 0x1C0023040 (GetPciAddressWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C002B6B0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDockIrpQueryPower @ 0x1C004A1E0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C004D070 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C004EFD4 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051740 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00518F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C00553F0 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005E830 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C00958A0 (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0097100 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0097350 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009EB50 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB1F0 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0LL;
}
