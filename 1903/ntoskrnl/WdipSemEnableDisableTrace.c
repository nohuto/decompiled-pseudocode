/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1407174EC
 * Callers:
 *     WdipSemCaptureState @ 0x140158784 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x1407173E0 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140744B0C (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x14076B6CC (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x14076CA90 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1408EEEC0 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140717540 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
