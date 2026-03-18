/*
 * XREFs of MiSetPfnBlink @ 0x1400BB420
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002E2E0 (MiBuildMdlForMappedFileFault.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     MiGetHardFaultPages @ 0x1400BD844 (MiGetHardFaultPages.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     MiLargeFreePageToMdl @ 0x14017C02C (MiLargeFreePageToMdl.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x1402D443C (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402D5040 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9488 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402DCB60 (MiReInitializeFreeSlabPfn.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFLL;
  if ( a3 == 1 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v5 & 0xFFFFFFF000000000uLL, v5);
    v7 = result;
    if ( v5 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFFF000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
