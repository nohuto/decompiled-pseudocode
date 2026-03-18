/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@PEAPEAV1@@Z @ 0x18017B4AC
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x180166200 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002FA84 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FB08 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 *a1,
        const struct MilPointAndSizeL *a2,
        __int64 a3,
        CExternalLayer **a4)
{
  struct IRenderTargetBitmap *v4; // rsi
  __int64 v6; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  char v13; // al
  int v14; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x18u);
  }
  else
  {
    v24 = 48;
    v23 = "DWM Scratch Rendertarget (color transform layer)";
    v13 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 144))(a1);
    v14 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v23, a2, v25, v22, v20, v13, 1, 0, &v21);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x25u);
      v4 = v21;
    }
    else
    {
      v16 = (CExternalLayer *)operator new(0x78uLL);
      v4 = v21;
      v18 = v16;
      if ( v16 )
      {
        CExternalLayer::CExternalLayer(v16, a2, v21);
        *((_QWORD *)v18 + 14) = a3;
        *(_QWORD *)v18 = &CColorTransformLayer::`vftable';
      }
      else
      {
        v18 = 0LL;
      }
      *a4 = v18;
      if ( !v18 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x2Au);
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v4 + 16LL))(v4);
  return v12;
}
