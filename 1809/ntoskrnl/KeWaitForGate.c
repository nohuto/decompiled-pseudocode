/*
 * XREFs of KeWaitForGate @ 0x1400FA384
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlinkWorkingSet @ 0x140091BBC (MiUnlinkWorkingSet.c)
 *     MiLockControlAreaSectionExtend @ 0x140092C20 (MiLockControlAreaSectionExtend.c)
 *     MiDrainControlAreaWrites @ 0x1400958A8 (MiDrainControlAreaWrites.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9B74 (MiWaitForPageWriteCompletion.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 *     MiAttemptSectionDelete @ 0x140122240 (MiAttemptSectionDelete.c)
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 *     MiMarkSessionDeletePending @ 0x140154BE4 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x14017F540 (MiZeroNodePages.c)
 *     MiMappedPageWriter @ 0x1401808E0 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x140181630 (KiExecuteDpc.c)
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     KiEpfStart @ 0x14029C0E4 (KiEpfStart.c)
 *     MiIncrementAweMapCount @ 0x1402B0FA4 (MiIncrementAweMapCount.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x140860F24 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140889F38 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408903AC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $6A96EFD8F2CF667E6B14FBA5D10C7BEB *v5; // rdi
  unsigned __int8 CurrentIrql; // r8
  unsigned int v7; // ebp
  struct _LIST_ENTRY *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
    v7 = KiBeginThreadWait((__int64)CurrentThread, 0LL, a2, 0);
    if ( v7 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL);
      return v7;
    }
    v8 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v8->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v8;
    v8->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v7 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, 0, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
