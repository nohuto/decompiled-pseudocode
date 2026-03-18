/*
 * XREFs of MiReleaseFreshPage @ 0x1400E0FE4
 * Callers:
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140029924 (MiAllocateMdlPagesByLists.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiClaimPhysicalRun @ 0x14009BF20 (MiClaimPhysicalRun.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1400B5640 (MiAllocateKernelStackPages.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiDeleteUltraMapContext @ 0x1400E1824 (MiDeleteUltraMapContext.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14011810C (MiTradeTransitionPage.c)
 *     MiPrivateFixup @ 0x140125E20 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CB2C (MiCreateUltraThreadContextHelper.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x140155A78 (MiFreePageChain.c)
 *     MiReplaceLockedPage @ 0x14018B014 (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF540 (MiSwitchToTransition.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBB04 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402C6B14 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x140662980 (MiFreeReadListPages.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14008229C (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
