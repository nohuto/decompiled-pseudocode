/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140717D54
 * Callers:
 *     WdipSemCaptureState @ 0x1401737F4 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140717AEC (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140717C54 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x1407437AC (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x140744B00 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1408B1A2C (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140717DB0 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
