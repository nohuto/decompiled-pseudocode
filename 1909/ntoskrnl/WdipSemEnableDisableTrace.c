/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1407192DC
 * Callers:
 *     WdipSemCaptureState @ 0x140158E24 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x1407191D0 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140746A0C (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x14076E520 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x14076F8E4 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1408EE7D0 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140719330 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
