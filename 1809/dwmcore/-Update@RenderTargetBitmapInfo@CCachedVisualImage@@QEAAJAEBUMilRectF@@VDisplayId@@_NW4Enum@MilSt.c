/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008BF90 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x1800300C8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18005FB00 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x180072170 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18008BE9C (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDisplayColorSpace@CDisplaySet@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x18008C620 (-GetDisplayColorSpace@CDisplaySet@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x18008CED4 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     CalculateViewboxToViewportMapping @ 0x18008F8D0 (CalculateViewboxToViewportMapping.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008F9FC (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18008FA28 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffdd @ 0x18018D950 (McTemplateU0ppffffdd.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801B695C (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1801E25E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        const struct _D3DCOLORVALUE **a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  const struct _D3DCOLORVALUE *v9; // rax
  CCachedVisualImage *v10; // rcx
  char v11; // r13
  int v12; // eax
  unsigned int v13; // ecx
  float v14; // xmm2_4
  float v15; // xmm0_4
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // r9d
  CDrawingContext *v21; // r15
  const struct _D3DCOLORVALUE *v22; // r10
  __int128 *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  CDisplayManager *v28; // rcx
  int CurrentDisplaySet; // eax
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 *v32; // rsi
  __int64 v33; // rdi
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  const struct _D3DCOLORVALUE *v41; // rdx
  char v42; // si
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  char v47; // r12
  CDisplayManager *v48; // rcx
  int v49; // eax
  unsigned int v50; // ecx
  enum DXGI_COLOR_SPACE_TYPE DisplayColorSpace; // eax
  int v53; // [rsp+20h] [rbp-E0h]
  CDrawingContext *v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  float v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-60h]
  __int128 v60; // [rsp+B0h] [rbp-50h]
  __int128 v61; // [rsp+C0h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-30h]
  __int128 v63; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v65; // [rsp+100h] [rbp+0h]
  __int128 v66; // [rsp+110h] [rbp+10h]
  __int128 v67; // [rsp+120h] [rbp+20h]
  int v68; // [rsp+130h] [rbp+30h]
  unsigned int v69; // [rsp+190h] [rbp+90h] BYREF

  v69 = a3;
  v6 = 0;
  v54 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(a1, a2, a5);
  if ( !*((_BYTE *)a1 + 44) )
  {
    v9 = *a1;
    if ( a4 )
    {
      if ( BYTE1(v9[23].a) != 1 )
        return v6;
    }
    else if ( BYTE1(v9[23].a) != 2 )
    {
      return v6;
    }
  }
  v10 = (CCachedVisualImage *)*a1;
  v11 = 0;
  v62 = 0;
  v12 = CCachedVisualImage::EnsureVisualTree(v10);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x35Fu);
    return v6;
  }
  CRenderTargetBitmap::GetBounds(a1[1], &v63);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
  {
    v14 = *((float *)a1 + 9) - *((float *)a1 + 7);
    v15 = *((float *)a1 + 8) - *((float *)a1 + 6);
    McTemplateU0ppffffdd(
      *(_DWORD *)a1 + 16,
      (int)(float)(*((float *)&v63 + 2) - *(float *)&v63),
      *a1 != 0LL ? *(_DWORD *)a1 + 16 : 0,
      *(_QWORD *)&(*a1)[12].r,
      *((_DWORD *)a1 + 6),
      *((_DWORD *)a1 + 7),
      SLOBYTE(v15),
      SLOBYTE(v14),
      (int)(float)(*((float *)&v63 + 2) - *(float *)&v63),
      (int)(float)(*((float *)&v63 + 3) - *((float *)&v63 + 1)));
  }
  v16 = CVisualTree::PreCompute(*(struct CVisualTree **)&(*a1)[14].b, 0LL);
  v6 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x371u);
    return v6;
  }
  v18 = CDrawingContext::Create(*(struct CComposition **)&(*a1)[2].r, &v54);
  v21 = v54;
  v6 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x377u);
  }
  else
  {
    CalculateViewboxToViewportMapping((unsigned int)&v63, (_DWORD)a1 + 24, *((_DWORD *)a1 + 10), v20, v53, (__int64)v58);
    v22 = *a1;
    if ( BYTE1((*a1)[23].b)
      && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)&v22[14].b + 24LL), (float *)&v55, &v56, (float *)&v54) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v58, COERCE_FLOAT(v55 ^ _xmm), COERCE_FLOAT(LODWORD(v56) ^ _xmm));
    }
    v23 = *(__int128 **)&v22[13].b;
    if ( v23 )
    {
      v24 = v23[1];
      v64 = *v23;
      v25 = v23[2];
      v65 = v24;
      v26 = v23[3];
      v27 = *((_DWORD *)v23 + 16);
      v66 = v25;
      v68 = v27;
      v67 = v26;
      CMILMatrix::Multiply((CMILMatrix *)&v64, (const struct CMILMatrix *)v58);
      v62 = v68;
      *(_OWORD *)v58 = v64;
      v59 = v65;
      v60 = v66;
      v61 = v67;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 240LL))(*(_QWORD *)&a1[1][10].r, a3);
    if ( DisplayId::IsSpecific((DisplayId *)&v69) )
    {
      v54 = 0LL;
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v54);
      CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v28, &v54);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, CurrentDisplaySet, 0x3A7u);
        Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v54);
        goto LABEL_58;
      }
      v55 = 0LL;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v55);
      if ( (int)CDisplaySet::GetDisplay((__int64)v54, a3, &v55) >= 0 )
      {
        v31 = *(_QWORD *)(v55 + 72);
        if ( v31 )
        {
          v32 = *(__int64 **)&a1[1][9].b;
          v33 = *v32;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 152LL))(v31);
          (*(void (__fastcall **)(__int64 *))(v33 + 160))(v32);
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v55);
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v54);
    }
    v34 = CDrawingContext::BeginFrame(
            v21,
            *(struct IRenderTarget **)&a1[1][9].b,
            &(*a1)[24].r,
            0,
            (__int64)v58,
            0LL,
            0,
            0LL);
    v6 = v34;
    if ( v34 >= 0 )
    {
      CVisualTree::GetBounds(*(_QWORD *)&(*a1)[14].b, &v64);
      v36 = *((float *)&v65 + 1) <= *(float *)&v65;
      if ( *((float *)&v64 + 2) <= *(float *)&v64 )
        ++v36;
      if ( *((float *)&v64 + 3) <= *((float *)&v64 + 1) )
        ++v36;
      if ( v36 <= 1 )
      {
        ++dword_180308098;
        ++dword_18030815C;
        v41 = *a1;
        v42 = (*(_DWORD *)(*(_QWORD *)&(*a1)[12].r + 88LL) & 0x100) != 0
           && (*(float *)v58 < 0.40000001 || *((float *)&v59 + 1) < 0.40000001);
        v57 = 0LL;
        CDrawingContext::CalculateOcclusion(v21, *(struct CVisualTree **)&v41[14].b, 0, 1, (__int64)&v57);
        if ( (float)(*((float *)a1 + 8) - *((float *)a1 + 6)) > (float)(*((float *)&v63 + 2) - *(float *)&v63)
          || (float)(*((float *)a1 + 9) - *((float *)a1 + 7)) > (float)(*((float *)&v63 + 3) - *((float *)&v63 + 1)) )
        {
          *(_QWORD *)&v64 = 0x600000003LL;
          LODWORD(v65) = 1;
          v43 = CDrawingContext::PushRenderOptionsInternal(v21, 0LL, (const struct MilRenderOptions *)&v64, 1);
          v6 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x3EEu);
            goto LABEL_55;
          }
          v11 = 1;
        }
        v45 = CDrawingContext::DrawVisualTree(v21, *(_QWORD *)&(*a1)[14].b, &v63, 0LL, 0x7FFFFFFF, 1, v11, 1, v42, 1, 1);
        v6 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x3FCu);
          goto LABEL_55;
        }
        if ( *((_BYTE *)v21 + 6354) )
          v47 = a4 + 1;
        else
          v47 = 0;
        BYTE1((*a1)[23].a) = v47;
        if ( !*((_BYTE *)v21 + 6356) )
        {
          v54 = 0LL;
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v54);
          v49 = CDisplayManager::GetCurrentDisplaySet(v48, &v54);
          v6 = v49;
          if ( v49 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x41Bu);
            Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v54);
            goto LABEL_55;
          }
          DisplayColorSpace = (unsigned int)CDisplaySet::GetDisplayColorSpace((__int64)v54, a3);
          if ( !IsDXGIColorSpaceHDR(DisplayColorSpace) )
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 240LL))(
              *(_QWORD *)&a1[1][10].r,
              DisplayId::None);
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v54);
        }
      }
      else
      {
        v37 = CDrawingContext::PushGpuClipRectInternal((__int64)v21, 0LL, (float *)&v63, 1, 1);
        v6 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3C1u);
          goto LABEL_55;
        }
        v39 = CDrawingContext::Clear(v21, *a1 + 24);
        v6 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x3C3u);
          goto LABEL_55;
        }
      }
      *((_BYTE *)a1 + 44) = 0;
LABEL_55:
      CDrawingContext::EndFrame(v21);
      goto LABEL_58;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x3B7u);
  }
LABEL_58:
  if ( v21 )
    CGdiSpriteBitmap::Release((CDrawingContext *)((char *)v21 + 16));
  return v6;
}
