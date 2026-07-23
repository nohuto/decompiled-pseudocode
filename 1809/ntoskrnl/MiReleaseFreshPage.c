/*
 * XREFs of MiReleaseFreshPage @ 0x1400E1084
 * Callers:
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140029924 (MiAllocateMdlPagesByLists.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiClaimPhysicalRun @ 0x14009BE60 (MiClaimPhysicalRun.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiDeleteUltraMapContext @ 0x1400E18C4 (MiDeleteUltraMapContext.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CC4C (MiCreateUltraThreadContextHelper.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x140155B98 (MiFreePageChain.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x140663B20 (MiFreeReadListPages.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
