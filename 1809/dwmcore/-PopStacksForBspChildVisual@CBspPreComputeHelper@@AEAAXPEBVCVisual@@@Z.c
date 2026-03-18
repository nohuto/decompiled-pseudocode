/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802248A0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18008DD64 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800A21D4 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x180165AB0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
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
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)this + 72);
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetOpacityInternal(v2) - 1.0)) & _xmm);
  if ( v5 >= 0.0000011920929 )
    CWatermarkStack<float,64,2,10>::Pop(v3 + 64);
  v6 = *(_DWORD *)(v4 + 96);
  if ( (v6 & 0x10) != 0 )
  {
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 56);
    v6 = *(_DWORD *)(v7 + 96);
  }
  if ( (v6 & 8) != 0 )
  {
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 48);
    v6 = *(_DWORD *)(v8 + 96);
  }
  if ( (v6 & 2) != 0 )
  {
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 40);
    v6 = *(_DWORD *)(v9 + 96);
  }
  if ( (v6 & 0x40) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 32);
  v10 = v3[24];
  if ( v10 )
    v3[24] = v10 - 1;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 80);
}
