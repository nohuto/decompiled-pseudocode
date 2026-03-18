/*
 * XREFs of ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18017CD3C
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180170720 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18003E298 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E304 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorSpaceLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct CColorSpaceLayer **a4)
{
  struct IRenderTargetBitmap *v5; // rdi
  __int64 v6; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  char v12; // al
  signed int v13; // eax
  __int64 v14; // rcx
  CExternalLayer *v15; // rax
  __int64 v16; // rcx
  struct CColorSpaceLayer *v17; // rbx
  int v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+54h] [rbp-1Ch]
  const char *v21; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+68h] [rbp-8h]
  struct IRenderTargetBitmap *v23; // [rsp+A0h] [rbp+30h] BYREF
  int v24; // [rsp+B0h] [rbp+40h] BYREF
  struct _LUID v25; // [rsp+B8h] [rbp+48h] BYREF

  v19 = 28;
  v24 = 0;
  *a4 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)a1;
  HIDWORD(v20) = a3;
  v23 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(v6 + 120))(a1, &v25, &v24);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1Du, 0LL);
  }
  else
  {
    v22 = 43;
    v21 = "DWM Scratch Rendertarget (colorspace layer)";
    v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 144LL))(a1);
    v13 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v21, a2, (__int64 *)&v19, v25, v24, v12, 1, 0, &v23);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x27u, 0LL);
      v5 = v23;
    }
    else
    {
      v15 = (CExternalLayer *)operator new(0x78uLL);
      v5 = v23;
      v17 = v15;
      if ( v15 )
      {
        CExternalLayer::CExternalLayer(v15, a2, v23);
        *(_QWORD *)v17 = &CColorSpaceLayer::`vftable';
      }
      else
      {
        v17 = 0LL;
      }
      *a4 = v17;
      if ( !v17 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x8007000E, 0x2Bu, 0LL);
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  return v11;
}
