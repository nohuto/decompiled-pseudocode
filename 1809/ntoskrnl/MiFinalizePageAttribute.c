/*
 * XREFs of MiFinalizePageAttribute @ 0x140029658
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiMapPagesToZero @ 0x1400F90E0 (MiMapPagesToZero.c)
 *     MiReplaceTransitionPage @ 0x14011846C (MiReplaceTransitionPage.c)
 *     MiTradeActivePage @ 0x14012DF24 (MiTradeActivePage.c)
 *     MiSplitDirectMapPage @ 0x1402B6D24 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1010 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA118 (MiHandleForkTransitionPte.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x1409C04C8 (MxSwapPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x1400EF920 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
