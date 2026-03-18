/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A3D8
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C004B998 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0050DA0 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0050E40 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0050EE0 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0050F70 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0050FF0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0051080 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0051130 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0051220 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C00512C0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0051370 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0051450 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C00514E0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C029D070 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x1C029F6C0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02A3AF0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02A3F3C (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02A40B0 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C02A4380 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C02AABE0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02AAD40 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02AAE40 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02AAF40 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

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
    v14 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v14 + 484) )
    {
      DpiCheckForOutstandingD3Requests(v14);
      v14 = *((_QWORD *)this + 1);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 168), 1u);
    if ( a4 )
    {
      v15 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
      *((_DWORD *)this + 4) = v15;
      if ( v15 >= 0 )
      {
        v16 = *((_QWORD *)this + 1) + 5480LL;
        *((_BYTE *)this + 21) = 1;
        ExAcquirePushLockExclusiveEx(v16, 0LL);
        if ( !a3 || !a3->RequestorMode )
          v4 = 1;
        *(_BYTE *)(*((_QWORD *)this + 1) + 5524LL) = v4;
      }
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v13);
  }
  return this;
}
