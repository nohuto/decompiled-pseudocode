/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18017D328
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F2BC (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180051DCC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x180051E10 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        __int64 *a1,
        const struct MilPointAndSizeL *a2,
        _OWORD *a3,
        CExternalLayer **a4)
{
  struct IRenderTargetBitmap *v4; // rsi
  __int64 v6; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  char v13; // al
  signed int v14; // eax
  __int64 v15; // rcx
  CExternalLayer *v16; // rax
  __int64 v17; // rcx
  CExternalLayer *v18; // rbx
  int v20; // [rsp+50h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v21; // [rsp+58h] [rbp-11h] BYREF
  struct _LUID v22; // [rsp+60h] [rbp-9h] BYREF
  const char *v23; // [rsp+68h] [rbp-1h] BYREF
  int v24; // [rsp+70h] [rbp+7h]
  __int64 v25[2]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = 0LL;
  *a4 = 0LL;
  v6 = *a1;
  v20 = 0;
  v21 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 24))(a1, v25);
  v10 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(*a1 + 120))(a1, &v22, &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x18u, 0LL);
  }
  else
  {
    v24 = 52;
    v23 = "DWM Scratch Rendertarget (linear interpolation layer";
    v13 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 144))(a1);
    v14 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v23, a2, v25, v22, v20, v13, 1, 0, &v21);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x25u, 0LL);
      v4 = v21;
    }
    else
    {
      v16 = (CExternalLayer *)operator new(0x80uLL);
      v4 = v21;
      v18 = v16;
      if ( v16 )
      {
        CExternalLayer::CExternalLayer(v16, a2, v21);
        *(_QWORD *)v18 = &CLinearInterpolationLayer::`vftable';
        *((_OWORD *)v18 + 7) = *a3;
      }
      else
      {
        v18 = 0LL;
      }
      *a4 = v18;
      if ( !v18 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x8007000E, 0x2Au, 0LL);
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v4 + 16LL))(v4);
  return v12;
}
