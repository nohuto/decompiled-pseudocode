/*
 * XREFs of DxgkDdiCreateVirtualGpu @ 0x1C020FAF8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F2B0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 */

__int64 __fastcall DxgkDdiCreateVirtualGpu(ADAPTER_RENDER **a1, int a2, unsigned __int8 a3, const GUID *a4)
{
  unsigned int VirtualGpu; // ebx
  unsigned int Data1; // [rsp+28h] [rbp-10h]

  VirtualGpu = ADAPTER_RENDER::CreateVirtualGpu(a1[320], a2, a4, a3);
  if ( bTracingEnabled )
  {
    Data1 = a4->Data1;
    VgpuTrace(1, VirtualGpu, a1, L"DxgkDdiCreateVirtualGpu", (wchar_t *)L"%d", Data1);
  }
  return VirtualGpu;
}
