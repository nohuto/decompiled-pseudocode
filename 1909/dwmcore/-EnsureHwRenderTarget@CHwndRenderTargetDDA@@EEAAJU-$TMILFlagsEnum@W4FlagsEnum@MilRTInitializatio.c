/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801AA1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AE94 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180159384 (-EnsureDDAHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(__int64 a1, unsigned int a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v3 = CDisplay::EnsureDDAHwRenderTarget(*(CDisplay **)(a1 + 168), a2);
  v5 = v3;
  if ( v3 >= 0 )
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(
      (__int64 *)(a1 + 176),
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 80LL));
  else
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x24u, 0LL);
  return v5;
}
