/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800AFBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AB40 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800AFAC8 (-EnsureHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800AFC80 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureHwRenderTarget(__int64 a1, unsigned int a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  _BYTE v7[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNSIGNED_RATIO v8; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = CDisplay::EnsureHwRenderTarget(*(CDisplay **)(a1 + 168), a2, *(_DWORD *)(a1 + 96), *(_DWORD *)(a1 + 104));
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802BFF28, 2u, v3, 0x8ACu, 0LL);
  }
  else
  {
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(
      (__int64 *)(a1 + 176),
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 72LL));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 160LL))(*(_QWORD *)(a1 + 176));
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 104LL))(a1 + 64, v7);
    CHwndRenderTarget::GetPresentStatistics((CHwndRenderTarget *)(a1 + 64), (struct DXGI_FRAME_STATISTICS_DWM *)v9, &v8);
  }
  return v5;
}
