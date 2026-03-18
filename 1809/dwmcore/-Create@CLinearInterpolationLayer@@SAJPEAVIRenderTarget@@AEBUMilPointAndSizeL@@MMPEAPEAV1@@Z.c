/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x18017CE60
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x180166374 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FB08 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x18017CC98 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4,
        struct CLinearInterpolationLayer **a5)
{
  struct IRenderTargetBitmap *v5; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  char v11; // al
  int v12; // eax
  __int64 v13; // rcx
  CLinearInterpolationLayer *v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+58h] [rbp-31h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+60h] [rbp-29h] BYREF
  struct _LUID v19; // [rsp+68h] [rbp-21h] BYREF
  const char *v20; // [rsp+70h] [rbp-19h] BYREF
  int v21; // [rsp+78h] [rbp-11h]
  __int64 v22[2]; // [rsp+80h] [rbp-9h] BYREF

  v5 = 0LL;
  v17 = 0;
  v18 = 0LL;
  *a5 = 0LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, v22);
  v8 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(*(_QWORD *)a1 + 120LL))(
         a1,
         &v19,
         &v17);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19u);
  }
  else
  {
    v21 = 52;
    v20 = "DWM Scratch Rendertarget (linear interpolation layer";
    v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 144LL))(a1);
    v12 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v20, a2, v22, v19, v17, v11, 1, 0, &v18);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x26u);
      v5 = v18;
    }
    else
    {
      v14 = (CLinearInterpolationLayer *)operator new(0x88uLL);
      v5 = v18;
      if ( v14 )
        v14 = CLinearInterpolationLayer::CLinearInterpolationLayer(v14, a2, v18, a3, a4);
      *a5 = v14;
      if ( !v14 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x2Cu);
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  return v10;
}
