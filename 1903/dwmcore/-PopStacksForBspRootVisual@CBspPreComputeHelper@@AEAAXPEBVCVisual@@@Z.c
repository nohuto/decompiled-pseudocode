/*
 * XREFs of ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x180254B28
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800B514C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800D4A68 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18016FF94 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x180254A30 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspRootVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  int *v8; // r8
  int v9; // eax
  int v10; // eax
  int *v11; // r8
  const struct CVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)this + 80);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)(v2 + 288));
  CWatermarkStack<float,64,2,10>::Pop((_DWORD *)(v3 + 256));
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)(v4 + 224));
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)(v5 + 192));
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)(v6 + 160));
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)(v7 + 128));
  v9 = v8[24];
  if ( v9 )
    v8[24] = v9 - 1;
  v10 = v8[16];
  if ( v10 )
    v8[16] = v10 - 1;
  CWatermarkStack<CVisual *,64,2,10>::Pop(v8 + 8, 0LL);
  if ( CWatermarkStack<CBspNode *,64,2,10>::Pop(v11, &v12) )
    ReleaseInterface<CD3DSurface>((__int64 *)&v12);
}
