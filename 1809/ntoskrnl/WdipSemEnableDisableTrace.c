/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140717D34
 * Callers:
 *     WdipSemCaptureState @ 0x140173814 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140717ACC (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140717C34 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x14074378C (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x140744AE0 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1408B1A0C (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140717D90 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
