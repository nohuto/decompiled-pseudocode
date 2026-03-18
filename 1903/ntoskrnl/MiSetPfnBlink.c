/*
 * XREFs of MiSetPfnBlink @ 0x1400DB5A0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002DEF0 (MiBuildMdlForMappedFileFault.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiReplenishPageSlist @ 0x1400DB080 (MiReplenishPageSlist.c)
 *     MiGetHardFaultPages @ 0x1400DD9C4 (MiGetHardFaultPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     MiLargeFreePageToMdl @ 0x14017B93C (MiLargeFreePageToMdl.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x1402D46DC (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402D52E0 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9728 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402DCE00 (MiReInitializeFreeSlabPfn.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
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
