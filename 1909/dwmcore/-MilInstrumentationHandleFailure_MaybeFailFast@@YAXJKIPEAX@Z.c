/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18001EA18
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18001EC1C (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(unsigned int a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned int v5; // esi

  v5 = a3;
  if ( a1 == -2003303421
    || a1 == -2003302654
    || IsOOM(a1)
    || g_dwFailFastForThreadId && g_dwFailFastForThreadId == GetCurrentThreadId() )
  {
    ModuleFailFastForHRESULT(a1, 0LL, a3);
  }
  DoStackCapture(a1, v5, a4);
}
