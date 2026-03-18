/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002ED2C
 * Callers:
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180030128 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002EDDC (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18002F658 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(CDrawingContext *a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  char v9; // si
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h]

  v9 = 0;
  v10 = CDrawingContext::FlushAllDeferredClipping(a1);
  v13 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x1135u);
LABEL_10:
    if ( v9 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (char *)a1 + 448,
        0LL,
        v19);
    return v13;
  }
  if ( a2 )
  {
    v20 = 3;
    v21 = a2;
    v17 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            (char *)a1 + 448,
            &v20);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x113Au);
      return v13;
    }
    v9 = 1;
  }
  LOBYTE(v11) = a3;
  v14 = CScopedClipStack::EnterClippingScope((char *)a1 + 1008, v11, a4, a5);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x113Eu);
    goto LABEL_10;
  }
  return v13;
}
