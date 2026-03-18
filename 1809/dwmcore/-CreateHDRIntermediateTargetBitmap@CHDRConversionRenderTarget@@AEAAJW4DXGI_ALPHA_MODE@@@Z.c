/*
 * XREFs of ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x180208BDC
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180208D10 (-GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180209280 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800914A8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z @ 0x1800D874C (--$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
        CHDRConversionRenderTarget *this,
        enum DXGI_ALPHA_MODE a2)
{
  __int64 **v2; // r14
  __int64 v3; // rax
  char v5; // al
  int RenderTargetBitmap; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD); // rax
  const char *v12; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-40h]
  _DWORD v14[4]; // [rsp+50h] [rbp-38h] BYREF

  v14[0] = 10;
  v12 = "HDR intermediate target bitmap";
  v2 = (__int64 **)((char *)this + 592);
  v3 = *(_QWORD *)this;
  v14[1] = a2;
  v14[2] = 1;
  v13 = 30;
  v5 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *))(v3 + 144))(this);
  RenderTargetBitmap = CD3DDeviceLevel1::CreateRenderTargetBitmap(
                         *((_QWORD *)this + 27),
                         (__int64)&v12,
                         *((_DWORD *)this + 62),
                         *((_DWORD *)this + 63),
                         *((_DWORD *)this + 29),
                         (__int64)v14,
                         v5,
                         v2);
  v8 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, RenderTargetBitmap, 0x2FFu);
  }
  else
  {
    v9 = **v2;
    (*(void (__fastcall **)(CHDRConversionRenderTarget *))(*(_QWORD *)this + 152LL))(this);
    (*(void (__fastcall **)(__int64 *))(v9 + 160))(*v2);
    v10 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(**v2 + 104))(*v2);
    ReplaceInterface<CDisplay,CDisplay>((__int64 *)this + 25, v10);
  }
  return v8;
}
