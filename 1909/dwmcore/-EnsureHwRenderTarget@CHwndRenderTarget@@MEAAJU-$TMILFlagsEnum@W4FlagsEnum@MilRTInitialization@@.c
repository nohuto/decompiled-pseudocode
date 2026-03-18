/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18002B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AE94 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18002B590 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002B648 (-EnsureHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureHwRenderTarget(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  _BYTE v6[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNSIGNED_RATIO v7; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = CDisplay::EnsureHwRenderTarget(*(CDisplay **)(a1 + 168));
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BE078, 2u, v2, 0x8ACu, 0LL);
  }
  else
  {
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(
      (__int64 *)(a1 + 176),
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 72LL));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 160LL))(*(_QWORD *)(a1 + 176));
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 104LL))(a1 + 64, v6);
    CHwndRenderTarget::GetPresentStatistics((CHwndRenderTarget *)(a1 + 64), (struct DXGI_FRAME_STATISTICS_DWM *)v8, &v7);
  }
  return v4;
}
