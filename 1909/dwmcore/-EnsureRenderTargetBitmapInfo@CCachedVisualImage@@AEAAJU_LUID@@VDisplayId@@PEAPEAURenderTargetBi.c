/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800247C4 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004F620 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x1800AE4A8 (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801C7A50 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 * Callees:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18004F984 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18004FC70 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FC88 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18005235C (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x1800523CC (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180052448 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800AA974 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800AD458 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800BEBE8 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmapInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v5; // ecx
  unsigned int v8; // r13d
  __int64 v9; // rsi
  unsigned int v10; // esi
  const struct _D3DCOLORVALUE **v11; // rax
  __int64 ExistingRenderTarget; // r15
  int v13; // eax
  unsigned int v15; // xmm0_4
  float v16; // xmm1_4
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-59h]
  unsigned int v21; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v22[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v23; // [rsp+50h] [rbp-29h]
  __int128 v24; // [rsp+58h] [rbp-21h] BYREF
  __int128 v25; // [rsp+68h] [rbp-11h] BYREF
  __int128 v26; // [rsp+78h] [rbp-1h]
  __int128 v27; // [rsp+88h] [rbp+Fh]

  v23 = a4;
  v5 = 0;
  *a4 = 0LL;
  v25 = 0uLL;
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v27 + 1) = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v10 = -2147467263;
    v20 = 1246;
    goto LABEL_23;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_BYTE *)(a1 + 378) )
  {
    *(float *)&v15 = (float)(*(float *)(a1 + 412) - *(float *)(a1 + 404)) + 6291456.25;
    v16 = *(float *)(a1 + 408) - *(float *)(a1 + 400);
    v21 = v15;
    *(float *)v22 = v16 + 6291456.25;
    CCachedVisualImage::RemoveInvalidTargets(
      (CCachedVisualImage *)a1,
      (int)(v22[0] << 10) >> 11,
      (int)(v15 << 10) >> 11);
    ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    if ( !ExistingRenderTarget && *(_DWORD *)(a1 + 264) )
      ExistingRenderTarget = *(_QWORD *)(a1 + 240);
    v10 = 0;
    goto LABEL_11;
  }
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v21, v22);
  if ( !CCachedVisualImage::HasContent((CCachedVisualImage *)(a1 + 8)) || !v21 || (v8 = v22[0]) == 0 )
  {
    CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
    v10 = 0;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(a1 + 379) )
  {
    v9 = *(_QWORD *)(a1 + 160);
    v24 = *(_OWORD *)(a1 + 144);
    if ( !v9 )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 138LL) )
    {
      v24 = *(_OWORD *)(v9 + 56);
      goto LABEL_8;
    }
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x32u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x68u, 0LL);
    v20 = 1283;
LABEL_23:
    v19 = v10;
    goto LABEL_26;
  }
  *(_QWORD *)&v24 = 0LL;
  *((float *)&v24 + 3) = (float)(int)v22[0];
  *((float *)&v24 + 2) = (float)(int)v21;
LABEL_8:
  v10 = 0;
  if ( !IsRectEmptyOrInvalid((float *)&v24) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, v21, v8);
    v11 = (const struct _D3DCOLORVALUE **)CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    *(_QWORD *)v22 = v11;
    ExistingRenderTarget = (__int64)v11;
    if ( v11 )
    {
      v13 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
              v11,
              (__int64)&v24,
              a3,
              *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1273LL),
              *(_DWORD *)(a1 + 224));
      v10 = v13;
      if ( v13 >= 0 )
      {
LABEL_11:
        *v23 = ExistingRenderTarget;
        goto LABEL_12;
      }
      v20 = 1306;
    }
    else
    {
      v13 = CCachedVisualImage::CreateRenderTargetInfo(a1, a2, a3, v21, v8, &v24, *(_DWORD *)(a1 + 224), &v25);
      if ( v13 < 0 )
      {
        if ( v13 == -2003292287 )
          goto LABEL_11;
        v10 = v13;
        v20 = 1340;
      }
      else
      {
        v13 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
                (const struct _D3DCOLORVALUE **)&v25,
                (__int64)&v24,
                a3,
                *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1273LL),
                *(_DWORD *)(a1 + 224));
        v10 = v13;
        if ( v13 < 0 )
        {
          v20 = 1325;
        }
        else
        {
          v13 = DynArrayImpl<1>::AddMultiple(a1 + 240, 48LL, 1LL, v22);
          v10 = v13;
          if ( v13 >= 0 )
          {
            ExistingRenderTarget = *(_QWORD *)v22;
            **(_OWORD **)v22 = v25;
            *(_OWORD *)(ExistingRenderTarget + 16) = v26;
            *(_OWORD *)(ExistingRenderTarget + 32) = v27;
            memset_0(&v25, 0, 0x30uLL);
            goto LABEL_11;
          }
          v20 = 1327;
        }
      }
    }
    v19 = v13;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v19, v20, 0LL);
  }
LABEL_12:
  CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)&v25);
  return v10;
}
