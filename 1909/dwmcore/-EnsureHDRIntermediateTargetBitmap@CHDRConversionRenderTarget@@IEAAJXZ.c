/*
 * XREFs of ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801673AC
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180167440 (-GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x18016726C (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::EnsureHDRIntermediateTargetBitmap(CHDRConversionRenderTarget *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  signed int HDRIntermediateTargetBitmap; // eax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 66) )
  {
    v3 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _BYTE *))(*(_QWORD *)this + 24LL))(this, v7);
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*(_DWORD *)(v3 + 4));
    v1 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, HDRIntermediateTargetBitmap, 0x30Fu, 0LL);
  }
  return v1;
}
