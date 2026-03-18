/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180012A50 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180063CA0 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015E560 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x1800133C4 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180013414 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18001727C (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180166E78 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 */

__int64 __fastcall CDrawingContext::DrawAsOverlay(COverlayContext **this, struct ISwapChainContent *a2, bool *a3)
{
  char v3; // r13
  unsigned int v7; // r14d
  CDrawingContext *v8; // rcx
  bool v9; // si
  CDrawingContext *v10; // rcx
  __int64 v11; // r9
  bool IsNormalDesktopRender; // r12
  const struct CVisual *CurrentVisual; // rax
  bool IsOverlayAssigned; // al
  bool v16; // r15
  const struct CMILMatrix *TopByReference; // rax
  __int128 v18; // xmm0
  COverlayContext *v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  LONG right; // edx
  LONG top; // r10d
  int left; // r8d
  LONG v25; // eax
  LONG bottom; // ecx
  LONG v27; // eax
  __int64 v28; // rdx
  FastRegion::Internal::CRgnData *v29; // rcx
  bool v30; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v31; // [rsp+40h] [rbp-C0h]
  __int128 v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v34[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-98h]
  LONG *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+80h] [rbp-80h]
  struct tagRECT v39; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v40; // [rsp+A0h] [rbp-60h] BYREF
  FastRegion::Internal::CRgnData *v41[10]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[80]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0;
  *a3 = 0;
  v7 = 0;
  if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
  {
    v9 = 0;
    v30 = 0;
    IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(v8);
    if ( !IsNormalDesktopRender || !*((_QWORD *)v10 + 790) || CDrawingContext::IsInLayer(v10) )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 104LL))(a2) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
      IsOverlayAssigned = COverlayContext::IsOverlayAssigned(this[790], CurrentVisual, a2, &v30, &v39, &v40);
      v9 = v30;
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
        v32 = 0uLL;
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
            if ( v19 && (*(unsigned __int8 (__fastcall **)(COverlayContext *))(*(_QWORD *)v19 + 432LL))(v19) )
              v18 = _xmm;
            else
              v18 = _xmm;
          }
          v32 = v18;
        }
        if ( !v9 )
        {
          memset_0(v34, 0, 0x24uLL);
          v33 = 20;
          HIDWORD(v35) = 1;
          HIDWORD(v36) = 1;
          v20 = CDrawingContext::PushRenderOptionsInternal(
                  (CDrawingContext *)this,
                  0LL,
                  (const struct MilRenderOptions *)&v33,
                  1);
          v7 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1E56u);
            return v7;
          }
          v3 = 1;
        }
        ++*((_DWORD *)this + 192);
        right = v39.right;
        v31 = v40;
        top = v40.top;
        left = _mm_cvtsi128_si32((__m128i)v40);
        v25 = v40.right;
        if ( v39.left > left )
          left = v39.left;
        v31.left = left;
        if ( v39.top > v40.top )
          top = v39.top;
        v31.top = top;
        if ( v39.right >= v40.right )
          right = v40.right;
        else
          v25 = v39.right;
        bottom = v39.bottom;
        v31.right = v25;
        v27 = v40.bottom;
        if ( v39.bottom < v40.bottom )
          v27 = v39.bottom;
        v31.bottom = v27;
        if ( right <= left )
          goto LABEL_38;
        if ( v39.bottom >= v40.bottom )
          bottom = v40.bottom;
        if ( bottom <= top )
LABEL_38:
          v31 = (struct tagRECT)0LL;
        CDrawingContext::RenderOverlayColor((CDrawingContext *)this);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v42, &v40);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v41, &v39);
        FastRegion::CRegion::Subtract((FastRegion::CRegion *)v41, (const struct CRegion *)v42);
        FastRegion::Internal::CRgnData::BeginIterator(v41[0], (struct FastRegion::CRegion::Iterator *)&v33);
        while ( (unsigned __int64)v36 < v35 )
        {
          v39.top = *v36;
          v39.bottom = v36[2];
          v28 = 2 * v38;
          v39.left = *(_DWORD *)(v37 + 4 * v28);
          v39.right = *(_DWORD *)(v37 + 4 * v28 + 4);
          CDrawingContext::RenderOverlayColor((CDrawingContext *)this);
          FastRegion::Internal::CRgnData::StepIterator(v29, (struct FastRegion::CRegion::Iterator *)&v33);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v41);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v42);
        --*((_DWORD *)this + 192);
        if ( v3 )
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
  return v7;
}
