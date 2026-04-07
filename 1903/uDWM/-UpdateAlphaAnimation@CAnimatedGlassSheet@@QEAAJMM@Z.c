/*
 * XREFs of ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x180094784
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800953C0 (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIF.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009546C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180094408 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateAlphaAnimation(CAnimatedGlassSheet *this, float a2, float a3)
{
  int started; // eax
  unsigned int v4; // ebx

  started = CAnimatedGlassSheet::StartAlphaAnimation(this, *((double *)this + 23), a2, a3);
  v4 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x17Cu);
  return v4;
}
