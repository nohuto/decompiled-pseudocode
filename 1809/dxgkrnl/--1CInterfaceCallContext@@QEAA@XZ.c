/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C004419C (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C00498D0 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0049970 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0049A10 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0049AA0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0049B20 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0049BB0 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0049C60 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0049D50 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0049DF0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0049EA0 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0049F80 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C004A010 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C0263138 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C0267B64 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C0267FB0 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C0268120 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C02683F0 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C026DC70 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C026DDB0 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C026DE90 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C026DF80 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 20) )
  {
    if ( *((_BYTE *)this + 21) )
    {
      *(_BYTE *)(*((_QWORD *)this + 1) + 5392LL) = 0;
      ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1) + 5352LL, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    v2 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v2 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v2 + 3816), 4023LL);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 64LL)
                                                      + 3992LL));
      v2 = *((_QWORD *)this + 1);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 1) + 64LL), *((PVOID *)this + 1), 0x20u);
  }
}
