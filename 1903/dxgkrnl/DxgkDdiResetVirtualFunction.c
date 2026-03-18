/*
 * XREFs of DxgkDdiResetVirtualFunction @ 0x1C02105F4
 * Callers:
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C00511A0 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C020F510 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 */

__int64 __fastcall DxgkDdiResetVirtualFunction(__int64 *a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+28h] [rbp-10h]
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  if ( bTracingEnabled )
  {
    v10 = a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiResetVirtualFunction", (wchar_t *)L"%d", v10);
  }
  v6 = a1[320];
  v11 = a3;
  v7 = ADAPTER_RENDER::ResetVirtualFunction(v6, a2, &v11);
  v8 = v7;
  if ( bTracingEnabled )
    VgpuTrace(0, v7, a1, L"DxgkDdiResetVirtualFunction", 0LL);
  return v8;
}
