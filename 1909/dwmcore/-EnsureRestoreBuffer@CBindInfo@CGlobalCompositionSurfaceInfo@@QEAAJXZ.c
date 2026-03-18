/*
 * XREFs of ?EnsureRestoreBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025B4C4
 * Callers:
 *     ?SetAdvancedDirectFlipState@CGlobalCompositionSurfaceInfo@@UEAAJPEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x18025C350 (-SetAdvancedDirectFlipState@CGlobalCompositionSurfaceInfo@@UEAAJPEAVIRenderTargetDisplay@@AEBV-$.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180052D80 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // ebx
  void **v2; // r15
  __int64 *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int *v9; // rsi
  char v10; // al
  signed int RenderTargetBitmap; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v15; // [rsp+7Ch] [rbp+Bh] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh]
  _BYTE v17[8]; // [rsp+88h] [rbp+17h] BYREF
  const char *v18; // [rsp+90h] [rbp+1Fh] BYREF
  int v19; // [rsp+98h] [rbp+27h]
  _DWORD v20[4]; // [rsp+A0h] [rbp+2Fh] BYREF

  v1 = 0;
  v2 = (void **)((char *)this + 80);
  if ( !*((_QWORD *)this + 10) )
  {
    v4 = (__int64 *)*((_QWORD *)this + 9);
    v15 = 0;
    v14 = 0;
    v4 += 18;
    v20[2] = 0;
    v20[0] = 87;
    v20[1] = 3;
    v5 = *v4;
    v16 = 1LL;
    (*(void (__fastcall **)(__int64 *, unsigned int *, unsigned int *))(v5 + 32))(v4, &v15, &v14);
    v6 = (_QWORD *)*((_QWORD *)this + 9);
    v18 = "DWM Rendertarget (DFlip+ restore buffer)";
    v19 = 40;
    v7 = v6 + 18;
    v8 = v6[18];
    v9 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v6 + 48LL))(v6, v17);
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(v8 + 104))(v7);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_18033D448,
                           (__int64)&v18,
                           v15,
                           v14,
                           v16,
                           0,
                           (struct PixelFormatInfo *)v20,
                           1,
                           *(struct _LUID *)((char *)this + 120),
                           *v9,
                           v10,
                           0,
                           1,
                           v2);
    v1 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, RenderTargetBitmap, 0x6DBu, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ADVANCED_DIRECTFLIP_CREATERESTOREBUFFER,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
    }
  }
  return v1;
}
