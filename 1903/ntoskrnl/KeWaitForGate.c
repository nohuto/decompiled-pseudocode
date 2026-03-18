/*
 * XREFs of KeWaitForGate @ 0x14011A9BC
 * Callers:
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400725E0 (MiCheckPurgeAndUpMapCount.c)
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 *     MiUnlinkWorkingSet @ 0x1400AD8C8 (MiUnlinkWorkingSet.c)
 *     MiDrainControlAreaWrites @ 0x1400DF8B0 (MiDrainControlAreaWrites.c)
 *     MiLockControlAreaSectionExtend @ 0x1400EAD68 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForPageWriteCompletion @ 0x14011A904 (MiWaitForPageWriteCompletion.c)
 *     MiZeroInParallel @ 0x140123178 (MiZeroInParallel.c)
 *     MiAttemptSectionDelete @ 0x14012513C (MiAttemptSectionDelete.c)
 *     MiMarkSessionDeletePending @ 0x140166CA8 (MiMarkSessionDeletePending.c)
 *     MiZeroBootLargePages @ 0x1401852F4 (MiZeroBootLargePages.c)
 *     MiZeroNodePages @ 0x140188120 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x14018ABB0 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x14018C6A0 (MiMappedPageWriter.c)
 *     MiFreeUnusedPfnPages @ 0x14019CAD0 (MiFreeUnusedPfnPages.c)
 *     KiEpfStart @ 0x1402B3424 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x1402CAA9C (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1402CC3E8 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x1402CD518 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x1402D65E0 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x1402E5678 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x14089D464 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1408C6BF4 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CD50C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiBeginThreadWait @ 0x1400BA600 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x14011AF94 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $B82006E644A0B3C21B5C2164048F272C *v5; // rdi
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
    v7 = KiBeginThreadWait((__int64)CurrentThread, 0, a2, 0);
    if ( v7 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, 0LL);
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
