/*
 * XREFs of ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18015AA64
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801ABAB0 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800AF7B8 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800DDBFC (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::EnsureDDAHwRenderTarget(CDisplay *this, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  signed int HwRenderTarget; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 10);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4) )
  {
    CDisplay::ReleaseDDAHwRenderTarget(this);
    HwRenderTarget = CDisplay::CreateHwRenderTarget(this, a2, (__int64)this + 80);
    v3 = HwRenderTarget;
    if ( HwRenderTarget < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, HwRenderTarget, 0x3A3u, 0LL);
  }
  return v3;
}
