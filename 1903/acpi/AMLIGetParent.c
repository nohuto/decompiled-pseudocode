/*
 * XREFs of AMLIGetParent @ 0x1C000FF40
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C000CE20 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C000FFB4 (OSNotifyCreateDevice.c)
 *     IsPciBusAsyncWorker @ 0x1C0010D70 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0022520 (IsPciDeviceWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     GetOpRegionScope @ 0x1C00235D4 (GetOpRegionScope.c)
 *     OSNotifyCreateProcessor @ 0x1C002C634 (OSNotifyCreateProcessor.c)
 *     AMLIIterateParentNext @ 0x1C002EB98 (AMLIIterateParentNext.c)
 *     CmosConfigSpaceHandler @ 0x1C004EE00 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050B00 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051170 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051310 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C00586F4 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B57C (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C5F0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005E830 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00AC704 (AcpiArblibAllocateArbiterInstance.c)
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
    dword_1C0082858 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
