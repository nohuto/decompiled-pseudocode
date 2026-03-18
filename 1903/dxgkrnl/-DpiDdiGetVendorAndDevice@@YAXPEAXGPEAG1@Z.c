/*
 * XREFs of ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0050EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A328 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A44C (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00513DC (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C020FEFC (DxgkDdiGetVendorAndDevice.c)
 */

void __fastcall DpiDdiGetVendorAndDevice(void *a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  void *v5; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v6[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]

  DpiGetVirtualGpuType(a1, &v5);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v6, v5, 0LL, 1);
  if ( v8 >= 0 )
    DxgkDdiGetVendorAndDevice(*(void **)(v7 + 3896), (__int64)a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v6);
}
