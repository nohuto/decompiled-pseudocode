/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C
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
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3,
        char a4)
{
  char v4; // di
  struct _IO_REMOVE_LOCK *v5; // rdx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  *(_QWORD *)this = a2;
  v4 = 0;
  v5 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v5;
  *((_WORD *)this + 10) = 0;
  v9 = IoAcquireRemoveLockEx(v5 + 2, v5, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)this + 20) = 1;
    KeEnterCriticalRegion();
    v12 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v12 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v12 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(*((_QWORD *)this + 1));
      v12 = *((_QWORD *)this + 1);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 168), 1u);
    if ( a4 )
    {
      v13 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
      *((_DWORD *)this + 4) = v13;
      if ( v13 >= 0 )
      {
        v14 = *((_QWORD *)this + 1) + 5352LL;
        *((_BYTE *)this + 21) = 1;
        ExAcquirePushLockExclusiveEx(v14, 0LL);
        if ( !a3 || !a3->RequestorMode )
          v4 = 1;
        *(_BYTE *)(*((_QWORD *)this + 1) + 5392LL) = v4;
      }
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v11);
  }
  return this;
}
