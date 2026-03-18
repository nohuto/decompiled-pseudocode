/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008BF90
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x18008AE74 (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008BF00 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18008EAF0 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18018CFD0 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007EA60 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x18008B310 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008C270 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18008C2E0 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008C35C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008CF64 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008CFA0 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008CFC0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800920F0 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmapInfo(
        __int64 a1,
        struct _LUID a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v5; // ecx
  unsigned int v8; // r13d
  __int64 v9; // rsi
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r15
  int RenderTargetInfo; // eax
  unsigned int v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-59h]
  unsigned int v25; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v26[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v27; // [rsp+50h] [rbp-29h]
  __int128 v28; // [rsp+58h] [rbp-21h] BYREF
  __int128 v29; // [rsp+68h] [rbp-11h] BYREF
  __int128 v30; // [rsp+78h] [rbp-1h]
  __int128 v31; // [rsp+88h] [rbp+Fh]

  v27 = a4;
  v5 = 0;
  *a4 = 0LL;
  v29 = 0uLL;
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v31 + 1) = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v10 = -2147467263;
    v24 = 1360;
    goto LABEL_23;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_BYTE *)(a1 + 378) )
  {
    *(float *)&v16 = (float)(*(float *)(a1 + 412) - *(float *)(a1 + 404)) + 6291456.25;
    v17 = *(float *)(a1 + 408) - *(float *)(a1 + 400);
    v25 = v16;
    *(float *)v26 = v17 + 6291456.25;
    CCachedVisualImage::RemoveInvalidTargets(
      (CCachedVisualImage *)a1,
      (int)(v26[0] << 10) >> 11,
      (int)(v16 << 10) >> 11);
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CCachedVisualImage::FindExistingRenderTarget)(a1, a2, a3);
    if ( !v13 && *(_DWORD *)(a1 + 264) )
      v13 = *(_QWORD *)(a1 + 240);
    v10 = 0;
    goto LABEL_11;
  }
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v25, v26);
  if ( !CCachedVisualImage::HasContent((CCachedVisualImage *)(a1 + 8)) || !v25 || (v8 = v26[0]) == 0 )
  {
    CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
    v10 = 0;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(a1 + 379) )
  {
    v9 = *(_QWORD *)(a1 + 160);
    v28 = *(_OWORD *)(a1 + 144);
    if ( !v9 )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 121LL) )
    {
      v28 = *(_OWORD *)(v9 + 56);
      goto LABEL_8;
    }
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024809, 0x68u);
    v24 = 1397;
LABEL_23:
    v23 = v10;
    goto LABEL_26;
  }
  *(_QWORD *)&v28 = 0LL;
  *((float *)&v28 + 3) = (float)(int)v26[0];
  *((float *)&v28 + 2) = (float)(int)v25;
LABEL_8:
  v10 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v28) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, v25, v8);
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CCachedVisualImage::FindExistingRenderTarget)(a1, a2, a3);
    *(_QWORD *)v26 = v11;
    v13 = v11;
    if ( v11 )
    {
      LOBYTE(v12) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1256LL);
      RenderTargetInfo = CCachedVisualImage::RenderTargetBitmapInfo::Update(v11, &v28, a3, v12, *(_DWORD *)(a1 + 224));
      v10 = RenderTargetInfo;
      if ( RenderTargetInfo >= 0 )
      {
LABEL_11:
        *v27 = v13;
        goto LABEL_12;
      }
      v24 = 1420;
    }
    else
    {
      RenderTargetInfo = CCachedVisualImage::CreateRenderTargetInfo(
                           (_DWORD *)a1,
                           a2,
                           a3,
                           v25,
                           v8,
                           (__int64)&v28,
                           *(_DWORD *)(a1 + 224),
                           (__int64)&v29);
      if ( RenderTargetInfo < 0 )
      {
        if ( RenderTargetInfo == -2003292287 )
          goto LABEL_11;
        v10 = RenderTargetInfo;
        v24 = 1454;
      }
      else
      {
        LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1256LL);
        RenderTargetInfo = CCachedVisualImage::RenderTargetBitmapInfo::Update(
                             &v29,
                             &v28,
                             a3,
                             v18,
                             *(_DWORD *)(a1 + 224));
        v10 = RenderTargetInfo;
        if ( RenderTargetInfo < 0 )
        {
          v24 = 1439;
        }
        else
        {
          RenderTargetInfo = DynArrayImpl<1>::AddMultiple(a1 + 240, 48, 1, v26);
          v10 = RenderTargetInfo;
          if ( RenderTargetInfo >= 0 )
          {
            v13 = *(_QWORD *)v26;
            v19 = v30;
            **(_OWORD **)v26 = v29;
            v20 = v31;
            *(_OWORD *)(v13 + 16) = v19;
            *(_OWORD *)(v13 + 32) = v20;
            memset_0(&v29, 0, 0x30uLL);
            goto LABEL_11;
          }
          v24 = 1441;
        }
      }
    }
    v23 = RenderTargetInfo;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v23, v24);
  }
LABEL_12:
  CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)&v29);
  return v10;
}
