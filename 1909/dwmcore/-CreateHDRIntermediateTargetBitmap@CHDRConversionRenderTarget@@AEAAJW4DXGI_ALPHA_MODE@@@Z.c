/*
 * XREFs of ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x18016726C
 * Callers:
 *     ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801673AC (-EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180167980 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800D26F8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z @ 0x180166EC0 (--$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
        CHDRConversionRenderTarget *this,
        enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r15
  __int64 v4; // rax
  __int64 (__fastcall *v6)(CHDRConversionRenderTarget *); // rax
  char v7; // al
  signed int RenderTargetBitmap; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64); // rbx
  __int64 (__fastcall ***v13)(_QWORD); // rax
  const char *v15; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-40h]
  _DWORD v17[4]; // [rsp+50h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 19);
  v15 = "HDR intermediate target bitmap";
  v3 = (_QWORD *)((char *)this + 528);
  v4 = *(_QWORD *)this;
  v17[0] = 10;
  v17[1] = a2;
  v17[2] = 1;
  v6 = *(__int64 (__fastcall **)(CHDRConversionRenderTarget *))(v4 + 144);
  v16 = 30;
  v7 = v6(this);
  RenderTargetBitmap = CD3DDeviceLevel1::CreateRenderTargetBitmap(
                         v2,
                         (__int64)&v15,
                         *((_DWORD *)this + 46),
                         *((_DWORD *)this + 47),
                         *((_DWORD *)this + 12),
                         (__int64)v17,
                         v7,
                         v3);
  v10 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, RenderTargetBitmap, 0x2FDu, 0LL);
  }
  else
  {
    v11 = *v3;
    v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 160LL);
    (*(void (__fastcall **)(CHDRConversionRenderTarget *))(*(_QWORD *)this + 152LL))(this);
    v12(v11);
    v13 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 104LL))(*v3);
    ReplaceInterface<CDirtyRegion const,CDirtyRegion const>((__int64 *)this + 17, v13);
  }
  return v10;
}
