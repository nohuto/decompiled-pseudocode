/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x180254A5C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18007E9BC (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800B514C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18016FF94 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  CVisual *v2; // r11
  int *v3; // r10
  __int64 v4; // r11
  float v5; // xmm2_4
  int v6; // eax
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  int v10; // eax

  v2 = a2;
  if ( (*((_BYTE *)a2 + 94) & 1) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)this + 72);
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetOpacityInternal(v2) - 1.0)) & _xmm);
  if ( v5 >= 0.0000011920929 )
    CWatermarkStack<float,64,2,10>::Pop(v3 + 64);
  v6 = *(_DWORD *)(v4 + 96);
  if ( (v6 & 0x10) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 56);
    v6 = *(_DWORD *)(v7 + 96);
  }
  if ( (v6 & 8) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 48);
    v6 = *(_DWORD *)(v8 + 96);
  }
  if ( (v6 & 2) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 40);
    v6 = *(_DWORD *)(v9 + 96);
  }
  if ( (v6 & 0x40) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 32);
  v10 = v3[24];
  if ( v10 )
    v3[24] = v10 - 1;
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 80);
}
