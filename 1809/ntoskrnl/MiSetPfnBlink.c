/*
 * XREFs of MiSetPfnBlink @ 0x140065CB0
 * Callers:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiReplenishPageSlist @ 0x1400EE380 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MiLargeFreePageToMdl @ 0x14012B8C8 (MiLargeFreePageToMdl.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x14015827C (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x1402AF540 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x1402BDC48 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402BE7E0 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFD00 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C2B00 (MiReInitializeFreeSlabPfn.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
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
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v6 & 0xFFFFFFF000000000uLL, v6);
    v7 = result;
    if ( v6 != result )
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
