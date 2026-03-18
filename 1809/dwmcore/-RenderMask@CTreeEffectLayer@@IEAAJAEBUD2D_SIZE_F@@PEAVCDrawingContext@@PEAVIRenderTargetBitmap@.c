/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BD8C
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000EE68 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180162430 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  float width; // xmm1_4
  float height; // xmm0_4
  float v11; // xmm0_4
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  struct CRenderTargetImageSource *v17; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v18[4]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a4 + 216LL))(
      a4,
      *((_QWORD *)a3 + 48),
      ((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL));
  width = a2->width;
  height = a2->height;
  *(_QWORD *)&v19 = 0LL;
  v18[0] = 0;
  v18[1] = 0;
  v17 = 0LL;
  *((_QWORD *)&v19 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
  v11 = height / *((float *)this + 69);
  *(float *)&v18[2] = width / *((float *)this + 68);
  *(float *)&v18[3] = v11;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  v12 = CRenderTargetImageSource::Create(a4, 1, &v17);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3ACu);
  }
  else
  {
    v15 = CDrawingContext::DrawBitmap(a3, v17, &v19, (const struct MilRectF *)v18, 0, 0);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3B5u);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  return v14;
}
