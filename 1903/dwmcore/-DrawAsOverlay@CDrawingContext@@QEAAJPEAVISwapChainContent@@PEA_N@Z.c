/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180014388
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013C40 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079E10 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801A4700 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180014464 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180014708 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x180017614 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A2200 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1801700C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801712B4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 */

__int64 __fastcall CDrawingContext::DrawAsOverlay(COverlayContext **this, struct ISwapChainContent *a2, bool *a3)
{
  unsigned int v3; // esi
  char v7; // r13
  CDrawingContext *v8; // rcx
  bool v9; // r15
  CDrawingContext *v10; // rcx
  __int64 v11; // r9
  bool IsNormalDesktopRender; // r14
  const struct CVisual *CurrentVisual; // rax
  bool IsOverlayAssigned; // al
  bool v16; // r14
  const struct CMILMatrix *TopByReference; // rax
  __int128 v18; // xmm0
  COverlayContext *v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  struct tagRECT v22; // xmm0
  __int64 v23; // rdx
  FastRegion::Internal::CRgnData *v24; // rcx
  bool v25; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v28[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h]
  LONG *v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+68h] [rbp-98h]
  struct tagRECT v33; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v34; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v35; // [rsp+A0h] [rbp-60h] BYREF
  FastRegion::Internal::CRgnData *v36[10]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v37[80]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0;
  *a3 = 0;
  v7 = 0;
  if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
  {
    v9 = 0;
    v25 = 0;
    IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(v8);
    if ( !IsNormalDesktopRender || !*((_QWORD *)v10 + 790) || CDrawingContext::IsInLayer(v10) )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 104LL))(a2) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
      IsOverlayAssigned = COverlayContext::IsOverlayAssigned(this[790], CurrentVisual, a2, &v25, &v34, &v35);
      v9 = v25;
      *a3 = IsOverlayAssigned;
    }
    if ( *a3 )
    {
      v16 = CCommonRegistryData::m_dwOverlayTestMode != 0;
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
      (*(void (__fastcall **)(struct ISwapChainContent *, COverlayContext *, const struct CMILMatrix *))(*(_QWORD *)a2 + 192LL))(
        a2,
        this[52],
        TopByReference);
      if ( !v9 || v16 )
      {
        v26 = 0uLL;
        if ( v16 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 152LL))(a2) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 160LL))(a2) )
              v18 = _xmm;
            else
              v18 = _xmm;
          }
          else
          {
            v19 = this[46];
            if ( v19 && (*(unsigned __int8 (__fastcall **)(COverlayContext *))(*(_QWORD *)v19 + 440LL))(v19) )
              v18 = _xmm;
            else
              v18 = _xmm;
          }
          v26 = v18;
        }
        if ( !v9 )
        {
          memset_0(v28, 0, 0x24uLL);
          v27 = 20;
          HIDWORD(v29) = 1;
          HIDWORD(v30) = 1;
          v20 = CDrawingContext::PushRenderOptionsInternal(
                  (CDrawingContext *)this,
                  0LL,
                  (const struct MilRenderOptions *)&v27,
                  1);
          v3 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1C89u, 0LL);
            return v3;
          }
          v7 = 1;
        }
        v22 = v35;
        ++*((_DWORD *)this + 192);
        v33 = v22;
        TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v33, &v34);
        CDrawingContext::RenderOverlayColor((CDrawingContext *)this);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v37, &v35);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v36, &v34);
        FastRegion::CRegion::Subtract((FastRegion::CRegion *)v36, (const struct CRegion *)v37);
        FastRegion::Internal::CRgnData::BeginIterator(v36[0], (struct FastRegion::CRegion::Iterator *)&v27);
        while ( (unsigned __int64)v30 < v29 )
        {
          v34.top = *v30;
          v34.bottom = v30[2];
          v23 = 2 * v32;
          v34.left = *(_DWORD *)(v31 + 4 * v23);
          v34.right = *(_DWORD *)(v31 + 4 * v23 + 4);
          CDrawingContext::RenderOverlayColor((CDrawingContext *)this);
          FastRegion::Internal::CRgnData::StepIterator(v24, (struct FastRegion::CRegion::Iterator *)&v27);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v36);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v37);
        --*((_DWORD *)this + 192);
        if ( v7 )
          CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
      }
    }
    else
    {
LABEL_8:
      LOBYTE(v11) = IsNormalDesktopRender;
      (*(void (__fastcall **)(struct ISwapChainContent *, COverlayContext *, _QWORD, __int64))(*(_QWORD *)a2 + 176LL))(
        a2,
        this[52],
        0LL,
        v11);
    }
  }
  return v3;
}
