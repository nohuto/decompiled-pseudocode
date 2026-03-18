/*
 * XREFs of ?CreateBitmap@CD2DBitmap@@AEAAJXZ @ 0x1801690F8
 * Callers:
 *     ?EnsureBitmap@CD2DBitmap@@AEAAJXZ @ 0x180169410 (-EnsureBitmap@CD2DBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800CE284 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateBitmap(CD2DBitmap *this)
{
  struct IDXGISurface *v1; // rdx
  unsigned int v3; // edi
  __int64 *v4; // rsi
  signed int D2DBitmapFromDxgiSurface; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = (struct IDXGISurface *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    v4 = (__int64 *)((char *)this + 152);
    D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                                 *(CD2DContext **)(*((_QWORD *)this + 3) + 24LL),
                                 v1,
                                 (const struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 216),
                                 (struct ID2D1Bitmap1 **)this + 19);
    v3 = D2DBitmapFromDxgiSurface;
    if ( D2DBitmapFromDxgiSurface < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, D2DBitmapFromDxgiSurface, 0x218u, 0LL);
    }
    else if ( *((_DWORD *)this + 55) == 3 )
    {
      v7 = *v4;
      *((_QWORD *)this + 20) = *v4;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F04, 0x211u, 0LL);
  }
  return v3;
}
