/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x1C01E0C2C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C01DFAF0 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(__int64 *a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  unsigned int VirtualGpuInfo; // ebx
  unsigned int v11; // [rsp+28h] [rbp-60h]
  _BYTE v12[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v14[40]; // [rsp+58h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1)
    || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12) >= 0 )
  {
    VirtualGpuInfo = ADAPTER_RENDER::GetVirtualGpuInfo(a1[316], a2, a3, a4, a5);
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
