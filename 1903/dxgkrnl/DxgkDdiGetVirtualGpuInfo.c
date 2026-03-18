/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x1C020FF94
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F2B0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C020EE48 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(__int64 *a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  unsigned int VirtualGpuInfo; // ebx
  unsigned int v11; // [rsp+28h] [rbp-D0h]
  _BYTE v12[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v13[64]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v14[72]; // [rsp+78h] [rbp-80h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1)
    || (int)COREADAPTERACCESS::AcquireShared((__int64)v12, 0xFFFFFFFFLL, 0LL) >= 0 )
  {
    VirtualGpuInfo = ADAPTER_RENDER::GetVirtualGpuInfo(a1[320], a2, a3, a4, a5);
    if ( bTracingEnabled )
    {
      v11 = *a3;
      VgpuTrace(1, VirtualGpuInfo, a1, L"DxgkDdiGetVirtualGpuInfo", (wchar_t *)L"%d", v11);
    }
  }
  else
  {
    VirtualGpuInfo = -1073741130;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return VirtualGpuInfo;
}
