/*
 * XREFs of ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180167440
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@WJA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800F04C0 (-GetD2DBitmap@CHDRConversionRenderTarget@@WJA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801673AC (-EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::GetD2DBitmap(CHDRConversionRenderTarget *this, struct ID2D1Bitmap1 **a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  v4 = CHDRConversionRenderTarget::EnsureHDRIntermediateTargetBitmap(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x50u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 66) + 72LL))(
           *((_QWORD *)this + 66),
           a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x52u, 0LL);
  }
  return v6;
}
