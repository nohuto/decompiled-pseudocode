/*
 * XREFs of MiFinalizePageAttribute @ 0x140029658
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiMapPagesToZero @ 0x1400F90C0 (MiMapPagesToZero.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MiTradeActivePage @ 0x14012DF04 (MiTradeActivePage.c)
 *     MiSplitDirectMapPage @ 0x1402B6C24 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x1409C04C8 (MxSwapPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x1400EF900 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
