/*
 * XREFs of AMLIGetParent @ 0x1C001AEEC
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0015E8C (OSNotifyCreateProcessor.c)
 *     IsPciDeviceWorker @ 0x1C0016320 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00173B0 (IsPciBusAsyncWorker.c)
 *     GetOpRegionScope @ 0x1C00178F4 (GetOpRegionScope.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0017F78 (OSNotifyCreateOperationRegion.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     OSNotifyCreateDevice @ 0x1C001AF60 (OSNotifyCreateDevice.c)
 *     AMLIIterateParentNext @ 0x1C002E3F4 (AMLIIterateParentNext.c)
 *     CmosConfigSpaceHandler @ 0x1C004D540 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C004F260 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004F850 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004F9F0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005985C (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005A890 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005CA70 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00A90E4 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 )
  {
    dword_1C0080868 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
