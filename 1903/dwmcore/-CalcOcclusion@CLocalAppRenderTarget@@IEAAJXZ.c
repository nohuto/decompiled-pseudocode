/*
 * XREFs of ?CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ @ 0x180250198
 * Callers:
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z @ 0x1802508C0 (-Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800B58BC (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CLocalAppRenderTarget::CalcOcclusion(CLocalAppRenderTarget *this)
{
  _QWORD *v1; // rdi
  int v3; // eax
  FLOAT v4; // xmm1_4
  CDrawingContext *DrawingContext; // rax
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CDrawingContext *v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  struct D2D_RECT_F v13; // [rsp+40h] [rbp-38h] BYREF

  v1 = (_QWORD *)((char *)this + 192);
  if ( *(_BYTE *)(*((_QWORD *)this + 23) + 2883LL) )
  {
    v3 = *((_DWORD *)this + 22);
    v13.left = 0.0;
    v13.top = 0.0;
    v4 = (float)*((int *)this + 23);
    v13.right = (float)v3;
    v13.bottom = v4;
    DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v6 = CDrawingContext::CalculateOcclusion(DrawingContext, *((struct CVisualTree **)this + 15), 1u, &v13, 0, 0, v1);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x116u, 0LL);
  }
  else
  {
    v9 = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v10 = CDrawingContext::CalculateOcclusion(
            v9,
            *((struct CVisualTree **)this + 15),
            *(_DWORD *)(*((_QWORD *)this + 23) + 1276LL),
            (struct D2D_RECT_F *)(*((_QWORD *)this + 23)
                                + (*(_BYTE *)(*((_QWORD *)this + 23) + 2883LL) != 0 ? 2860LL : 1116LL)),
            0,
            0,
            v1);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x11Fu, 0LL);
  }
  return v8;
}
