/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C
 * Callers:
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x18002E0BC (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180043D30 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800B52DC (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801C91F0 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180029B24 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18002B7D8 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180042AFC (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180042B6C (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180042BE8 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043788 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800437C0 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800437D8 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800CA08C (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 ExistingRenderTarget; // r15
  int v14; // eax
  unsigned int v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-59h]
  unsigned int v23; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v24[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-29h]
  __int128 v26; // [rsp+58h] [rbp-21h] BYREF
  __int128 v27; // [rsp+68h] [rbp-11h] BYREF
  __int128 v28; // [rsp+78h] [rbp-1h]
  __int128 v29; // [rsp+88h] [rbp+Fh]

  v25 = a4;
  v5 = 0;
  *a4 = 0LL;
  v27 = 0uLL;
  *(_QWORD *)&v28 = 0LL;
  *((_QWORD *)&v29 + 1) = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v10 = -2147467263;
    v22 = 1246;
    goto LABEL_23;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_BYTE *)(a1 + 378) )
  {
    *(float *)&v16 = (float)(*(float *)(a1 + 412) - *(float *)(a1 + 404)) + 6291456.25;
    v17 = *(float *)(a1 + 408) - *(float *)(a1 + 400);
    v23 = v16;
    *(float *)v24 = v17 + 6291456.25;
    CCachedVisualImage::RemoveInvalidTargets(
      (CCachedVisualImage *)a1,
      (int)(v24[0] << 10) >> 11,
      (int)(v16 << 10) >> 11);
    ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    if ( !ExistingRenderTarget && *(_DWORD *)(a1 + 264) )
      ExistingRenderTarget = *(_QWORD *)(a1 + 240);
    v10 = 0;
    goto LABEL_11;
  }
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v23, v24);
  if ( !CCachedVisualImage::HasContent((CCachedVisualImage *)(a1 + 8)) || !v23 || (v8 = v24[0]) == 0 )
  {
    CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
    v10 = 0;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(a1 + 379) )
  {
    v9 = *(_QWORD *)(a1 + 160);
    v26 = *(_OWORD *)(a1 + 144);
    if ( !v9 )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 138LL) )
    {
      v26 = *(_OWORD *)(v9 + 56);
      goto LABEL_8;
    }
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x32u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0x68u, 0LL);
    v22 = 1283;
LABEL_23:
    v21 = v10;
    goto LABEL_26;
  }
  *(_QWORD *)&v26 = 0LL;
  *((float *)&v26 + 3) = (float)(int)v24[0];
  *((float *)&v26 + 2) = (float)(int)v23;
LABEL_8:
  v10 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v26) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, v23, v8);
    v11 = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    *(_QWORD *)v24 = v11;
    ExistingRenderTarget = v11;
    if ( v11 )
    {
      LOBYTE(v12) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1273LL);
      v14 = CCachedVisualImage::RenderTargetBitmapInfo::Update(v11, &v26, a3, v12, *(_DWORD *)(a1 + 224));
      v10 = v14;
      if ( v14 >= 0 )
      {
LABEL_11:
        *v25 = ExistingRenderTarget;
        goto LABEL_12;
      }
      v22 = 1306;
    }
    else
    {
      v14 = CCachedVisualImage::CreateRenderTargetInfo(a1, a2, a3, v23, v8, &v26, *(_DWORD *)(a1 + 224), &v27);
      if ( v14 < 0 )
      {
        if ( v14 == -2003292287 )
          goto LABEL_11;
        v10 = v14;
        v22 = 1340;
      }
      else
      {
        LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1273LL);
        v14 = CCachedVisualImage::RenderTargetBitmapInfo::Update(&v27, &v26, a3, v18, *(_DWORD *)(a1 + 224));
        v10 = v14;
        if ( v14 < 0 )
        {
          v22 = 1325;
        }
        else
        {
          v14 = DynArrayImpl<1>::AddMultiple(a1 + 240, 48, 1, v24);
          v10 = v14;
          if ( v14 >= 0 )
          {
            ExistingRenderTarget = *(_QWORD *)v24;
            **(_OWORD **)v24 = v27;
            *(_OWORD *)(ExistingRenderTarget + 16) = v28;
            *(_OWORD *)(ExistingRenderTarget + 32) = v29;
            memset_0(&v27, 0, 0x30uLL);
            goto LABEL_11;
          }
          v22 = 1327;
        }
      }
    }
    v21 = v14;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v21, v22, 0LL);
  }
LABEL_12:
  CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)&v27);
  return v10;
}
