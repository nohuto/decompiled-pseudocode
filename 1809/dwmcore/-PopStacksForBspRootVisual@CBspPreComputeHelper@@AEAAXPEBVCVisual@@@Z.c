/*
 * XREFs of ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18022496C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800767C0 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18008DD64 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x180165AB0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x180224874 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
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
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)this + 80);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v2 + 288));
  CWatermarkStack<float,64,2,10>::Pop((_DWORD *)(v3 + 256));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v4 + 224));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v5 + 192));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v6 + 160));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v7 + 128));
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
