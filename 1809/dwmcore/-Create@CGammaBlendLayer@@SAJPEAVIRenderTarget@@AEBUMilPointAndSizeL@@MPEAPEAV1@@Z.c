/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MPEAPEAV1@@Z @ 0x18017D6BC
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801662DC (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002FA84 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FB08 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        struct CGammaBlendLayer **a4)
{
  struct IRenderTargetBitmap *v4; // rsi
  __int64 v6; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 (__fastcall *v11)(struct IRenderTarget *, struct _LUID *, int *); // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  char v15; // al
  int v16; // eax
  __int64 v17; // rcx
  CExternalLayer *v18; // rax
  __int64 v19; // rcx
  float *v20; // rbx
  int v22; // [rsp+58h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v23; // [rsp+60h] [rbp-11h] BYREF
  __int64 v24; // [rsp+68h] [rbp-9h] BYREF
  int v25; // [rsp+70h] [rbp-1h]
  struct _LUID v26; // [rsp+78h] [rbp+7h] BYREF
  const char *v27; // [rsp+80h] [rbp+Fh] BYREF
  int v28; // [rsp+88h] [rbp+17h]

  v4 = 0LL;
  *a4 = 0LL;
  v6 = *(_QWORD *)a1;
  v22 = 0;
  v23 = 0LL;
  v9 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IRenderTarget *, const char **))(v6 + 24))(a1, &v27);
  v25 = 0;
  v24 = v9;
  v10 = *(_QWORD *)a1;
  HIDWORD(v24) = 1;
  v11 = *(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(v10 + 120);
  LODWORD(v24) = CCommonRegistryData::m_fGammaBlendWithFP16 != 0 ? 10 : 28;
  v12 = v11(a1, &v26, &v22);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x29u);
  }
  else
  {
    v28 = 44;
    v27 = "DWM Scratch Rendertarget (gamma blend layer)";
    v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 144LL))(a1);
    v16 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v27, a2, &v24, v26, v22, v15, 1, 0, &v23);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x34u);
      v4 = v23;
    }
    else
    {
      v18 = (CExternalLayer *)operator new(0x78uLL);
      v4 = v23;
      v20 = (float *)v18;
      if ( v18 )
      {
        CExternalLayer::CExternalLayer(v18, a2, v23);
        v20[28] = a3;
        *(_QWORD *)v20 = &CGammaBlendLayer::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
      *a4 = (struct CGammaBlendLayer *)v20;
      if ( !v20 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x38u);
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v4 + 16LL))(v4);
  return v14;
}
