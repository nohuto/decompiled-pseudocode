/*
 * XREFs of ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180208D10
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@WNA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800F10F0 (-GetD2DBitmap@CHDRConversionRenderTarget@@WNA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x180208BDC (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::GetD2DBitmap(CHDRConversionRenderTarget *this, struct ID2D1Bitmap1 **a2)
{
  int v2; // ebx
  __int64 v5; // rax
  int HDRIntermediateTargetBitmap; // eax
  int v7; // eax
  __int64 v8; // rcx
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 74) )
  {
    v5 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _BYTE *))(*(_QWORD *)this + 24LL))(this, v10);
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*(_DWORD *)(v5 + 4));
    v2 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, HDRIntermediateTargetBitmap, 0x311u);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0x52u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 74) + 72LL))(
           *((_QWORD *)this + 74),
           a2);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x54u);
  }
  return (unsigned int)v2;
}
