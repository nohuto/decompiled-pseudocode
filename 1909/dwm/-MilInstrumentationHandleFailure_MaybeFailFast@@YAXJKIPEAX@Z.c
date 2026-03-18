/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140008F1C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140001850 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x140005BC0 (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x140008DB4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1400090E0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(DWORD a1, unsigned int a2, DWORD a3, void *a4)
{
  if ( a1 == -2003303421
    || a1 == -2003302654
    || (a2 & 0x10) != 0 && IsOOM(a1)
    || g_dwFailFastForThreadId && g_dwFailFastForThreadId == GetCurrentThreadId() )
  {
    ModuleFailFastForHRESULT(a1, 0LL);
    JUMPOUT(0x140008FAALL);
  }
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, a3, a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
