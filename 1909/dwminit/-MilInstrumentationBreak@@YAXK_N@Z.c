/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003A54
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800037A0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     BreakForInstrumentation @ 0x180003A10 (BreakForInstrumentation.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x180003B94 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180003BE4 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180003C54 (-AssertW@@YAXPEBG000K@Z.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl

  v2 = (char)a1;
  if ( BreakForInstrumentation(a1, a2)
    && ((v2 & 8) == 0
     || (unsigned int)IsKernelDebuggerPresent()
     || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
  {
    AssertW(
      L"Unexpected HRESULT in MilInstrumentation* caller",
      0LL,
      L"MilInstrumentationBreak",
      L"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
      0xD6u);
  }
}
