/*
 * XREFs of ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18016FC90
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020CEFC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x1802576E4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800339C8 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C7050 (-Pop@CDrawingContext@@UEAAJXZ.c)
 */

void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int *v1; // rbx
  signed int v3; // eax
  __int64 v4; // rcx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v1 = (int *)((char *)this + 448);
  *(_QWORD *)&v5 = 0LL;
  while ( (int)CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(v1, &v5) >= 0 )
  {
    if ( (_DWORD)v5 == 11 )
      goto LABEL_7;
    v3 = CDrawingContext::Pop(this);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x15EAu, 0LL);
  }
  if ( (_DWORD)v5 != 11 )
    return;
LABEL_7:
  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v5);
}
