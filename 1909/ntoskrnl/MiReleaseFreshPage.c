/*
 * XREFs of MiReleaseFreshPage @ 0x1400F9D6C
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiClaimPhysicalRun @ 0x1400B9088 (MiClaimPhysicalRun.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraMapContext @ 0x1400F9324 (MiDeleteUltraMapContext.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140157054 (MiAllocateMdlPagesByLists.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x140164414 (MiFreePageChain.c)
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x140647C68 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x140647CF0 (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x1409F1F7C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int8 v2; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = MiLockPageInline(a1);
  MiReturnFreeZeroPage(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
