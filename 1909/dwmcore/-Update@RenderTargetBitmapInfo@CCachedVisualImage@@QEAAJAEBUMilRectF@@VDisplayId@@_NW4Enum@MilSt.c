/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180023BD8 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024E70 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003F558 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18003F9A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x18005018C (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?GetDisplayColorSpace@CDisplaySet@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x180051F64 (-GetDisplayColorSpace@CDisplaySet@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180052034 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x180053DC8 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180053F30 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AF1C0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     CalculateViewboxToViewportMapping @ 0x1800C486C (CalculateViewboxToViewportMapping.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800D38C8 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D4D44 (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801C1958 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     McTemplateU0ppffffdd @ 0x1801C83F0 (McTemplateU0ppffffdd.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18021B374 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        const struct _D3DCOLORVALUE **a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  bool v9; // r8
  char v10; // cl
  CCachedVisualImage *v12; // rcx
  char v13; // r13
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // r9d
  CDrawingContext *v21; // r15
  const struct _D3DCOLORVALUE *v22; // r10
  __int64 v23; // rax
  CDisplayManager *v24; // rcx
  int CurrentDisplaySet; // eax
  unsigned int v26; // ecx
  CDrawingContext *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  void (__fastcall *v30)(__int64); // rdi
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __m128 v34; // xmm1
  unsigned int v35; // eax
  const struct _D3DCOLORVALUE *v36; // rdx
  __int64 v37; // rsi
  int v38; // eax
  unsigned int v39; // ecx
  char v40; // r12
  CDisplayManager *v41; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  enum DXGI_COLOR_SPACE_TYPE DisplayColorSpace; // eax
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  float v49; // xmm2_4
  float v50; // xmm0_4
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  int v54; // eax
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // [rsp+20h] [rbp-E0h]
  CDrawingContext *v58; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  float v60; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+D0h] [rbp-30h]
  float v68; // [rsp+E0h] [rbp-20h] BYREF
  float v69; // [rsp+E4h] [rbp-1Ch]
  float v70; // [rsp+E8h] [rbp-18h]
  float v71; // [rsp+ECh] [rbp-14h]
  __m128 v72; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v73; // [rsp+100h] [rbp+0h]
  __int128 v74; // [rsp+110h] [rbp+10h]
  __int128 v75; // [rsp+120h] [rbp+20h]
  int v76; // [rsp+130h] [rbp+30h]
  unsigned int v77; // [rsp+190h] [rbp+90h] BYREF

  v77 = a3;
  v6 = 0;
  v58 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(a1, a2, a5);
  if ( !*((_BYTE *)a1 + 44) )
  {
    v10 = BYTE1((*a1)[23].a);
    if ( a4 )
    {
      if ( v10 != 1 )
        return v6;
    }
    else if ( v10 != 2 )
    {
      return v6;
    }
  }
  v12 = (CCachedVisualImage *)*a1;
  v13 = 0;
  v67 = 0;
  v61 = 0LL;
  v14 = CCachedVisualImage::EnsureVisualTree(v12, 1LL, v9);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2E6u, 0LL);
    return v6;
  }
  CRenderTargetBitmap::GetBounds(a1[1], &v68);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
  {
    v49 = *((float *)a1 + 9) - *((float *)a1 + 7);
    v50 = *((float *)a1 + 8) - *((float *)a1 + 6);
    McTemplateU0ppffffdd(
      *(_DWORD *)a1 + 16,
      (int)(float)(v70 - v68),
      *a1 != 0LL ? *(_DWORD *)a1 + 16 : 0,
      *(_QWORD *)&(*a1)[12].r,
      *((_DWORD *)a1 + 6),
      *((_DWORD *)a1 + 7),
      SLOBYTE(v50),
      SLOBYTE(v49),
      (int)(float)(v70 - v68),
      (int)(float)(v71 - v69));
  }
  v16 = CVisualTree::PreCompute(*(_QWORD *)&(*a1)[14].b, 0LL);
  v6 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2F8u, 0LL);
    return v6;
  }
  v18 = CDrawingContext::Create(*(struct CComposition **)&(*a1)[2].r, &v58);
  v21 = v58;
  v6 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2FEu, 0LL);
  }
  else
  {
    CalculateViewboxToViewportMapping((unsigned int)&v68, (_DWORD)a1 + 24, *((_DWORD *)a1 + 10), v20, v57, (__int64)v63);
    v22 = *a1;
    if ( BYTE1((*a1)[23].b)
      && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)&v22[14].b + 24LL), (float *)&v59, &v60, (float *)&v58) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v63, COERCE_FLOAT(v59 ^ _xmm), COERCE_FLOAT(LODWORD(v60) ^ _xmm));
    }
    v23 = *(_QWORD *)&v22[13].b;
    if ( v23 )
    {
      v51 = *(_OWORD *)(v23 + 16);
      v72 = *(__m128 *)v23;
      v52 = *(_OWORD *)(v23 + 32);
      v73 = v51;
      v53 = *(_OWORD *)(v23 + 48);
      v54 = *(_DWORD *)(v23 + 64);
      v74 = v52;
      v76 = v54;
      v75 = v53;
      CMILMatrix::Multiply((CMILMatrix *)&v72, (const struct CMILMatrix *)v63);
      v67 = v76;
      *(__m128 *)v63 = v72;
      v64 = v73;
      v65 = v74;
      v66 = v75;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 240LL))(*(_QWORD *)&a1[1][10].r, a3);
    if ( DisplayId::IsSpecific((DisplayId *)&v77) )
    {
      v58 = 0LL;
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v58);
      CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v24, &v58);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, CurrentDisplaySet, 0x32Eu, 0LL);
        Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v58);
        goto LABEL_41;
      }
      v27 = v58;
      v59 = 0LL;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v59);
      if ( (int)CDisplaySet::GetDisplay(v27, a3, &v59) >= 0 )
      {
        v28 = *(_QWORD *)(v59 + 72);
        if ( v28 )
        {
          v29 = *(_QWORD *)&a1[1][9].b;
          v30 = *(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 160LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 152LL))(v28);
          v30(v29);
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v59);
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v58);
    }
    v31 = CDrawingContext::BeginFrame(v21, (__int64)v63, 0LL, 0, 0LL);
    v6 = v31;
    if ( v31 >= 0 )
    {
      v33 = *(_QWORD *)&(*a1)[14].b;
      v34 = *(__m128 *)(v33 + 36);
      *(_QWORD *)&v73 = *(_QWORD *)(v33 + 52);
      v35 = *((float *)&v73 + 1) <= *(float *)&v73;
      v72 = v34;
      if ( _mm_shuffle_ps(v34, v34, 170).m128_f32[0] <= v34.m128_f32[0] )
        ++v35;
      if ( v72.m128_f32[3] <= v72.m128_f32[1] )
        ++v35;
      if ( v35 > 1 )
      {
        v45 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v21, 0, (unsigned int)&v68, 1, 1);
        v6 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x348u, 0LL);
          goto LABEL_40;
        }
        v47 = CDrawingContext::Clear(v21, *a1 + 24);
        v6 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x34Au, 0LL);
          goto LABEL_40;
        }
      }
      else
      {
        ++dword_180339868;
        ++dword_18033992C;
        v36 = *a1;
        if ( (*(_DWORD *)(*(_QWORD *)&(*a1)[12].r + 88LL) & 0x200) != 0
          && (*(float *)v63 < 0.40000001 || *((float *)&v64 + 1) < 0.40000001) )
        {
          v37 = (__int64)(a1 + 3);
        }
        else
        {
          v37 = v61;
        }
        v62 = 0LL;
        CDrawingContext::CalculateOcclusion(v21, *(struct CVisualTree **)&v36[14].b, 1LL, (__int64)&v68, 0, 1, &v62);
        if ( (float)(*((float *)a1 + 8) - *((float *)a1 + 6)) > (float)(v70 - v68)
          || (float)(*((float *)a1 + 9) - *((float *)a1 + 7)) > (float)(v71 - v69) )
        {
          v72.m128_u64[0] = 0x600000003LL;
          LODWORD(v73) = 1;
          v55 = CDrawingContext::PushRenderOptionsInternal(v21, 0LL, (const struct MilRenderOptions *)&v72, 1);
          v6 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x375u, 0LL);
            goto LABEL_40;
          }
          v13 = 1;
        }
        v38 = CDrawingContext::DrawVisualTree(v21, 0x7FFFFFFF, 1, v13, 1, v37, 1, 1);
        v6 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x384u, 0LL);
          goto LABEL_40;
        }
        if ( g_LockAndReadCVI )
        {
          CDrawingContext::FlushD2D(v21);
          (*(void (__fastcall **)(const struct _D3DCOLORVALUE *))(*(_QWORD *)&a1[1][9].r + 152LL))(a1[1] + 9);
        }
        if ( *((_BYTE *)v21 + 6354) )
          v40 = a4 + 1;
        else
          v40 = 0;
        BYTE1((*a1)[23].a) = v40;
        if ( !*((_BYTE *)v21 + 6356) )
        {
          v58 = 0LL;
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v58);
          v42 = CDisplayManager::GetCurrentDisplaySet(v41, &v58);
          v6 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x3A9u, 0LL);
            Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v58);
            goto LABEL_40;
          }
          DisplayColorSpace = (unsigned int)CDisplaySet::GetDisplayColorSpace(v58, a3);
          if ( !IsDXGIColorSpaceHDR(DisplayColorSpace) )
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 240LL))(
              *(_QWORD *)&a1[1][10].r,
              (unsigned int)DisplayId::None);
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v58);
        }
      }
      *((_BYTE *)a1 + 44) = 0;
LABEL_40:
      CDrawingContext::EndFrame(v21);
      goto LABEL_41;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x33Eu, 0LL);
  }
LABEL_41:
  if ( v21 )
    CGdiSpriteBitmap::Release((CDrawingContext *)((char *)v21 + 16));
  return v6;
}
