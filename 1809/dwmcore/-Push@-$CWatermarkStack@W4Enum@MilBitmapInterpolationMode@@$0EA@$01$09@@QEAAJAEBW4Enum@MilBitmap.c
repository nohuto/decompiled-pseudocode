/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005F8B0 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18006ABF4 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224CF4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224EC4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // r14
  unsigned int v7; // ecx
  unsigned int v8; // eax
  void *v9; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  SIZE_T v13; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v11 = 2LL * a1[1];
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = 2 * a1[1];
  v3 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v12 <= 0x40 )
    v12 = 64;
  v3 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 4 )
  {
    v3 = -2147024809;
    goto LABEL_24;
  }
  v13 = 4LL * v12;
  if ( !v13 )
    v13 = 1LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, v13);
  v9 = v4;
  if ( !v4 )
  {
    v3 = -2147024882;
LABEL_24:
    v9 = 0LL;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v14 = -1;
    v15 = 4LL * *a1;
    if ( v15 <= 0xFFFFFFFF )
      v14 = 4 * *a1;
    v3 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v15 <= 0xFFFFFFFF )
    {
      memcpy_0(v4, *((const void **)a1 + 2), v14);
      WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v4;
      a1[1] = v12;
LABEL_2:
      *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v2) = *a2;
      v7 = a1[6];
      v8 = *a1 + 1;
      *a1 = v8;
      if ( v7 <= v8 )
        v7 = v8;
      v9 = 0LL;
      a1[6] = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x56u);
  }
LABEL_5:
  if ( v9 )
    HeapFree(WPF::g_processHeap, 0, v9);
  return (unsigned int)v3;
}
