/*
 * XREFs of DxgkDdiQueryMitigatedRangeCount @ 0x1C01E0D74
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C01DFDB0 (-QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGAT.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRangeCount(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int v6; // [rsp+28h] [rbp-20h]

  ADAPTER_RENDER::QueryMitigatedRangeCount(a1[316], a2, a3);
  if ( bTracingEnabled )
  {
    v6 = *a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiQueryMitigatedRangeCount", (wchar_t *)L"%d %d", v6, a3 + 1);
  }
  return 0LL;
}
