/*
 * XREFs of ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0050FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A328 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A44C (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00513DC (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryProbedBars @ 0x1C0210248 (DxgkDdiQueryProbedBars.c)
 */

__int64 __fastcall DpiDdiQueryProbedBars2(void *a1, __int64 a2, unsigned int *a3)
{
  unsigned int ProbedBars; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  void *v8; // [rsp+68h] [rbp+20h] BYREF

  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v5, v8, 0LL, 1);
  ProbedBars = v7;
  if ( v7 >= 0 )
  {
    ProbedBars = DxgkDdiQueryProbedBars(*(void **)(v6 + 3896));
    v7 = ProbedBars;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v5);
  return ProbedBars;
}
