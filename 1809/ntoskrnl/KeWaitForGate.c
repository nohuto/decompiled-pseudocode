/*
 * XREFs of KeWaitForGate @ 0x1400FA2E4
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DD0 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlinkWorkingSet @ 0x140091C7C (MiUnlinkWorkingSet.c)
 *     MiLockControlAreaSectionExtend @ 0x140092CE0 (MiLockControlAreaSectionExtend.c)
 *     MiDrainControlAreaWrites @ 0x140095968 (MiDrainControlAreaWrites.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9AD4 (MiWaitForPageWriteCompletion.c)
 *     KiOutSwapProcesses @ 0x14010B430 (KiOutSwapProcesses.c)
 *     MiAttemptSectionDelete @ 0x140122150 (MiAttemptSectionDelete.c)
 *     MiZeroInParallel @ 0x14013C524 (MiZeroInParallel.c)
 *     MiMarkSessionDeletePending @ 0x140154AC4 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x14017F3E0 (MiZeroNodePages.c)
 *     MiMappedPageWriter @ 0x140180780 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x1401814D0 (KiExecuteDpc.c)
 *     MiFreeUnusedPfnPages @ 0x140183FC0 (MiFreeUnusedPfnPages.c)
 *     MiZeroBootLargePages @ 0x140192534 (MiZeroBootLargePages.c)
 *     KiEpfStart @ 0x14029BDF4 (KiEpfStart.c)
 *     MiIncrementAweMapCount @ 0x1402B0CB4 (MiIncrementAweMapCount.c)
 *     MiChangingSubsectionProtos @ 0x1402B5330 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1402B605C (MiIncrementLargeSubsections.c)
 *     MiWaitForVadDeletion @ 0x1402CB050 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x14085FCE4 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140888CF8 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14088F16C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x14008B1C0 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x1400F9D8C (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBDF0 (KiAcquireKobjectLockSafe.c)
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
