/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MPEAPEAV1@@Z @ 0x18017F2E0
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801708F8 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18003E298 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E304 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        struct CGammaBlendLayer **a4)
{
  struct IRenderTargetBitmap *v4; // rsi
  __int64 v6; // rax
  __int64 (__fastcall *v9)(struct IRenderTarget *, struct _LUID *, int *); // rax
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  char v13; // al
  signed int v14; // eax
  __int64 v15; // rcx
  CExternalLayer *v16; // rax
  __int64 v17; // rcx
  float *v18; // rbx
  int v20; // [rsp+58h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v21; // [rsp+60h] [rbp-11h] BYREF
  struct _LUID v22; // [rsp+68h] [rbp-9h] BYREF
  const char *v23; // [rsp+70h] [rbp-1h] BYREF
  int v24; // [rsp+78h] [rbp+7h]
  __int64 v25; // [rsp+80h] [rbp+Fh] BYREF
  int v26; // [rsp+88h] [rbp+17h]

  v4 = 0LL;
  *a4 = 0LL;
  v6 = *(_QWORD *)a1;
  v20 = 0;
  v21 = 0LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64 *))(v6 + 24))(a1, &v25);
  v26 = 0;
  HIDWORD(v25) = 1;
  v9 = *(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(*(_QWORD *)a1 + 120LL);
  LODWORD(v25) = CCommonRegistryData::m_fGammaBlendWithFP16 != 0 ? 10 : 28;
  v10 = v9(a1, &v22, &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x29u, 0LL);
  }
  else
  {
    v24 = 44;
    v23 = "DWM Scratch Rendertarget (gamma blend layer)";
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 144LL))(a1);
    v14 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v23, a2, &v25, v22, v20, v13, 1, 0, &v21);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x34u, 0LL);
      v4 = v21;
    }
    else
    {
      v16 = (CExternalLayer *)operator new(0x78uLL);
      v4 = v21;
      v18 = (float *)v16;
      if ( v16 )
      {
        CExternalLayer::CExternalLayer(v16, a2, v21);
        v18[28] = a3;
        *(_QWORD *)v18 = &CGammaBlendLayer::`vftable';
      }
      else
      {
        v18 = 0LL;
      }
      *a4 = (struct CGammaBlendLayer *)v18;
      if ( !v18 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x8007000E, 0x38u, 0LL);
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v4 + 16LL))(v4);
  return v12;
}
