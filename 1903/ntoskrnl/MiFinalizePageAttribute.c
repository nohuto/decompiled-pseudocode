/*
 * XREFs of MiFinalizePageAttribute @ 0x1400A3F48
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiInitializeTransitionPfn @ 0x1400A3DA8 (MiInitializeTransitionPfn.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x1409FC488 (MxSwapPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
