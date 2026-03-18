/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x180042368 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180042568 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180042CD8 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDisplayColorSpace@CDisplaySet@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x180042D20 (-GetDisplayColorSpace@CDisplaySet@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x1800436F8 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18007A960 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18007AD30 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A2200 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4714 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     CalculateViewboxToViewportMapping @ 0x1800C4D8C (CalculateViewboxToViewportMapping.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800D35A8 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D4C48 (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801C30F8 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     McTemplateU0ppffffdd @ 0x1801C9B90 (McTemplateU0ppffffdd.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18021CA64 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        const struct _D3DCOLORVALUE **a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  char v9; // cl
  CCachedVisualImage *v11; // rcx
  char v12; // r13
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // r9d
  CDrawingContext *v20; // r15
  const struct _D3DCOLORVALUE *v21; // r10
  __int64 v22; // rax
  CDisplayManager *v23; // rcx
  int CurrentDisplaySet; // eax
  unsigned int v25; // ecx
  CDrawingContext *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rsi
  void (__fastcall *v29)(__int64); // rdi
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __m128 v33; // xmm1
  unsigned int v34; // eax
  const struct _D3DCOLORVALUE *v35; // rdx
  __int64 v36; // rsi
  int v37; // eax
  unsigned int v38; // ecx
  char v39; // r12
  CDisplayManager *v40; // rcx
  int v41; // eax
  unsigned int v42; // ecx
  enum DXGI_COLOR_SPACE_TYPE DisplayColorSpace; // eax
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  unsigned int v47; // ecx
  float v48; // xmm2_4
  float v49; // xmm0_4
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  int v53; // eax
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // [rsp+20h] [rbp-E0h]
  CDrawingContext *v57; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  float v59; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  __int64 v62[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+D0h] [rbp-30h]
  float v67; // [rsp+E0h] [rbp-20h] BYREF
  float v68; // [rsp+E4h] [rbp-1Ch]
  float v69; // [rsp+E8h] [rbp-18h]
  float v70; // [rsp+ECh] [rbp-14h]
  __m128 v71; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+10h]
  __int128 v74; // [rsp+120h] [rbp+20h]
  int v75; // [rsp+130h] [rbp+30h]
  unsigned int v76; // [rsp+190h] [rbp+90h] BYREF

  v76 = a3;
  v6 = 0;
  v57 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(a1, a2, a5);
  if ( !*((_BYTE *)a1 + 44) )
  {
    v9 = BYTE1((*a1)[23].a);
    if ( a4 )
    {
      if ( v9 != 1 )
        return v6;
    }
    else if ( v9 != 2 )
    {
      return v6;
    }
  }
  v11 = (CCachedVisualImage *)*a1;
  v12 = 0;
  v66 = 0;
  v60 = 0LL;
  v13 = CCachedVisualImage::EnsureVisualTree(v11);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2E6u, 0LL);
    return v6;
  }
  CRenderTargetBitmap::GetBounds(a1[1], &v67);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
  {
    v48 = *((float *)a1 + 9) - *((float *)a1 + 7);
    v49 = *((float *)a1 + 8) - *((float *)a1 + 6);
    McTemplateU0ppffffdd(
      *(_DWORD *)a1 + 16,
      (int)(float)(v69 - v67),
      *a1 != 0LL ? *(_DWORD *)a1 + 16 : 0,
      *(_QWORD *)&(*a1)[12].r,
      *((_DWORD *)a1 + 6),
      *((_DWORD *)a1 + 7),
      SLOBYTE(v49),
      SLOBYTE(v48),
      (int)(float)(v69 - v67),
      (int)(float)(v70 - v68));
  }
  v15 = CVisualTree::PreCompute(*(_QWORD *)&(*a1)[14].b, 0LL);
  v6 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2F8u, 0LL);
    return v6;
  }
  v17 = CDrawingContext::Create(*(struct CComposition **)&(*a1)[2].r, &v57);
  v20 = v57;
  v6 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2FEu, 0LL);
  }
  else
  {
    CalculateViewboxToViewportMapping((unsigned int)&v67, (_DWORD)a1 + 24, *((_DWORD *)a1 + 10), v19, v56, (__int64)v62);
    v21 = *a1;
    if ( BYTE1((*a1)[23].b)
      && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)&v21[14].b + 24LL), (float *)&v58, &v59, (float *)&v57) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v62, COERCE_FLOAT(v58 ^ _xmm), COERCE_FLOAT(LODWORD(v59) ^ _xmm));
    }
    v22 = *(_QWORD *)&v21[13].b;
    if ( v22 )
    {
      v50 = *(_OWORD *)(v22 + 16);
      v71 = *(__m128 *)v22;
      v51 = *(_OWORD *)(v22 + 32);
      v72 = v50;
      v52 = *(_OWORD *)(v22 + 48);
      v53 = *(_DWORD *)(v22 + 64);
      v73 = v51;
      v75 = v53;
      v74 = v52;
      CMILMatrix::Multiply((CMILMatrix *)&v71, (const struct CMILMatrix *)v62);
      v66 = v75;
      *(__m128 *)v62 = v71;
      v63 = v72;
      v64 = v73;
      v65 = v74;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 240LL))(*(_QWORD *)&a1[1][10].r, a3);
    if ( DisplayId::IsSpecific((DisplayId *)&v76) )
    {
      v57 = 0LL;
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v57);
      CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v23, &v57);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, CurrentDisplaySet, 0x32Eu, 0LL);
        Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v57);
        goto LABEL_41;
      }
      v26 = v57;
      v58 = 0LL;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v58);
      if ( (int)CDisplaySet::GetDisplay(v26, a3, &v58) >= 0 )
      {
        v27 = *(_QWORD *)(v58 + 72);
        if ( v27 )
        {
          v28 = *(_QWORD *)&a1[1][9].b;
          v29 = *(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 160LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 152LL))(v27);
          v29(v28);
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v58);
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v57);
    }
    v30 = CDrawingContext::BeginFrame(v20, (__int64)v62, 0LL, 0, 0LL);
    v6 = v30;
    if ( v30 >= 0 )
    {
      v32 = *(_QWORD *)&(*a1)[14].b;
      v33 = *(__m128 *)(v32 + 36);
      *(_QWORD *)&v72 = *(_QWORD *)(v32 + 52);
      v34 = *((float *)&v72 + 1) <= *(float *)&v72;
      v71 = v33;
      if ( _mm_shuffle_ps(v33, v33, 170).m128_f32[0] <= v33.m128_f32[0] )
        ++v34;
      if ( v71.m128_f32[3] <= v71.m128_f32[1] )
        ++v34;
      if ( v34 > 1 )
      {
        v44 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v20, 0, (unsigned int)&v67, 1, 1);
        v6 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x348u, 0LL);
          goto LABEL_40;
        }
        v46 = CDrawingContext::Clear(v20, *a1 + 24);
        v6 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x34Au, 0LL);
          goto LABEL_40;
        }
      }
      else
      {
        ++dword_18033C778;
        ++dword_18033C83C;
        v35 = *a1;
        if ( (*(_DWORD *)(*(_QWORD *)&(*a1)[12].r + 88LL) & 0x200) != 0
          && (*(float *)v62 < 0.40000001 || *((float *)&v63 + 1) < 0.40000001) )
        {
          v36 = (__int64)(a1 + 3);
        }
        else
        {
          v36 = v60;
        }
        v61 = 0LL;
        CDrawingContext::CalculateOcclusion(v20, *(struct CVisualTree **)&v35[14].b, 0, 1, (__int64)&v61);
        if ( (float)(*((float *)a1 + 8) - *((float *)a1 + 6)) > (float)(v69 - v67)
          || (float)(*((float *)a1 + 9) - *((float *)a1 + 7)) > (float)(v70 - v68) )
        {
          v71.m128_u64[0] = 0x600000003LL;
          LODWORD(v72) = 1;
          v54 = CDrawingContext::PushRenderOptionsInternal(v20, 0LL, (const struct MilRenderOptions *)&v71, 1);
          v6 = v54;
          if ( v54 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x375u, 0LL);
            goto LABEL_40;
          }
          v12 = 1;
        }
        v37 = CDrawingContext::DrawVisualTree(v20, 0x7FFFFFFF, 1, v12, 1, v36, 1, 1);
        v6 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x384u, 0LL);
          goto LABEL_40;
        }
        if ( g_LockAndReadCVI )
        {
          CDrawingContext::FlushD2D(v20);
          (*(void (__fastcall **)(const struct _D3DCOLORVALUE *))(*(_QWORD *)&a1[1][9].r + 152LL))(a1[1] + 9);
        }
        if ( *((_BYTE *)v20 + 6354) )
          v39 = a4 + 1;
        else
          v39 = 0;
        BYTE1((*a1)[23].a) = v39;
        if ( !*((_BYTE *)v20 + 6356) )
        {
          v57 = 0LL;
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v57);
          v41 = CDisplayManager::GetCurrentDisplaySet(v40, &v57);
          v6 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x3A9u, 0LL);
            Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v57);
            goto LABEL_40;
          }
          DisplayColorSpace = (unsigned int)CDisplaySet::GetDisplayColorSpace((__int64)v57, a3);
          if ( !IsDXGIColorSpaceHDR(DisplayColorSpace) )
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 240LL))(
              *(_QWORD *)&a1[1][10].r,
              (unsigned int)DisplayId::None);
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v57);
        }
      }
      *((_BYTE *)a1 + 44) = 0;
LABEL_40:
      CDrawingContext::EndFrame(v20);
      goto LABEL_41;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x33Eu, 0LL);
  }
LABEL_41:
  if ( v20 )
    CGdiSpriteBitmap::Release((CDrawingContext *)((char *)v20 + 16));
  return v6;
}
