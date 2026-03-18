/*
 * XREFs of ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00513DC
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0050D60 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0050E00 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0050EA0 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0050F30 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0050FB0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0051040 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C00510F0 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C00511A0 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C00511E0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0051280 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0051330 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0051410 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C00514A0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiDoInterfaceDereferenceGpuP @ 0x1C02A9930 (DpiDoInterfaceDereferenceGpuP.c)
 *     DpiDoInterfaceReferenceGpuP @ 0x1C02A9980 (DpiDoInterfaceReferenceGpuP.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02A99B0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02A9DB0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02A9F60 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiIovGetBackingResource @ 0x1C02AA7D0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02AA930 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02AAA30 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02AAB30 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetVirtualGpuType(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( *a1 == 1 )
  {
    *a2 = *((_QWORD *)a1 - 681);
  }
  else
  {
    *a2 = *((_QWORD *)a1 - 677);
    return 0LL;
  }
  return result;
}
