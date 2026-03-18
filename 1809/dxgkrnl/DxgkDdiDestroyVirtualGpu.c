/*
 * XREFs of DxgkDdiDestroyVirtualGpu @ 0x1C01E07FC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C01DEE60 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 */

__int64 __fastcall DxgkDdiDestroyVirtualGpu(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+28h] [rbp-10h]

  v5 = ADAPTER_RENDER::DestroyVirtualGpu(a1[316], a2, a3);
  if ( bTracingEnabled )
  {
    v7 = *a3;
    VgpuTrace(1, v5, a1, L"DxgkDdiDestroyVirtualGpu", (wchar_t *)L"%d", v7);
  }
  return v5;
}
