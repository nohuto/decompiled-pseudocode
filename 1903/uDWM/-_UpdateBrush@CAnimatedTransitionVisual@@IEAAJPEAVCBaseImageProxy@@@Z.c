/*
 * XREFs of ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x180030614
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180030358 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A06AC (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180030BD4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateBrush(CAnimatedTransitionVisual *this, struct CBaseImageProxy *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  void *v6; // [rsp+28h] [rbp-80h]
  __int128 v7; // [rsp+70h] [rbp-38h] BYREF
  __int128 v8; // [rsp+80h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 74);
  LODWORD(v6) = 1;
  v8 = _xmm;
  v7 = _xmm;
  v3 = CImageLegacyMilBrushProxy::Update(v2, a2, &v8, &v7, 0);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x34Bu, v6);
  return v4;
}
