/*
 * XREFs of ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800904A0
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180090380 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 *     ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180203060 (-GetBits@CHwTextureRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800909E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  struct tagRECT v13; // [rsp+40h] [rbp-48h] BYREF

  v13 = *a2;
  v8 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 4))(this) )
  {
    if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 18))(this) )
    {
      v8 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024891, 0x86u);
    }
    else
    {
      v10 = CD3DSurface::CopyPixelsToBitmap(this[25], &v13, (__int64)a3, a4, a5);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8Eu);
    }
  }
  return v8;
}
