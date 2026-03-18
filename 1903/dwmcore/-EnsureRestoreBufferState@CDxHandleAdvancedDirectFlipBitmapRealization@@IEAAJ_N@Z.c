/*
 * XREFs of ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1802623BC
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802624E4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262B3C (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262C38 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18003DFF0 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F0B0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64, __int64 *); // rax
  signed int v7; // eax
  __int64 v8; // rcx
  signed int RenderTargetBitmapFromTexture; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13[2]; // [rsp+48h] [rbp-30h]
  int v14[4]; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  v12 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 56);
  if ( v4 )
  {
    v5 = *v4;
    v13[1] = 0;
    v14[2] = 0;
    v13[0] = 1;
    v6 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 408);
    v14[0] = 87;
    v14[1] = 3;
    v7 = v6(v4, a2, &v12);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x158u, 0LL);
    }
    else
    {
      ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 55);
      RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                        (__int64)&qword_180340368,
                                        *(__int64 *)v13,
                                        0LL,
                                        (__int64)v14,
                                        *(struct _LUID *)((char *)this + 288),
                                        *((_DWORD *)this + 106),
                                        v12,
                                        (_QWORD *)this + 55);
      v2 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, RenderTargetBitmapFromTexture, 0x162u, 0LL);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v2;
}
