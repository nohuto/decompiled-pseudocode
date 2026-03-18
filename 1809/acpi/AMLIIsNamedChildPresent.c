/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C001ED60
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00103C0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0010D74 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     GetPciAddressWorker @ 0x1C00186D0 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019BE0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIDockIrpQueryPower @ 0x1C0048C20 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C004B8B0 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C004D714 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004FDF0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004FF90 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0053990 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005CA70 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009955C (ACPIInternalSetProximityDomain.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009ADBC (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009B140 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00A7D30 (ACPIDockIrpQueryCapabilities.c)
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
