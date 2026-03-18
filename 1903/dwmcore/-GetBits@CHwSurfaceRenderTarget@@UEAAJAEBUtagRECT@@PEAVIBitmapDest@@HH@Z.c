/*
 * XREFs of ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800B1760
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800B1640 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 *     ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180163440 (-GetBits@CHwTextureRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800B1818 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+40h] [rbp-48h] BYREF

  v13 = *a2;
  v8 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 4))(this) )
  {
    if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 18))(this) )
    {
      v8 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070005, 0x79u, 0LL);
    }
    else
    {
      v10 = CD3DSurface::CopyPixelsToBitmap(this[17], &v13, (__int64)a3, a4, a5);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x81u, 0LL);
    }
  }
  return v8;
}
