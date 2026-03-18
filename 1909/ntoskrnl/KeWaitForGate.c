/*
 * XREFs of KeWaitForGate @ 0x140118DEC
 * Callers:
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     MiLockControlAreaSectionExtend @ 0x140088EC8 (MiLockControlAreaSectionExtend.c)
 *     MiUnlinkWorkingSet @ 0x14008E63C (MiUnlinkWorkingSet.c)
 *     MiDrainControlAreaWrites @ 0x1400BF730 (MiDrainControlAreaWrites.c)
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 *     MiWaitForPageWriteCompletion @ 0x140118D34 (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x1401257AC (MiAttemptSectionDelete.c)
 *     MiMarkSessionDeletePending @ 0x1401666F8 (MiMarkSessionDeletePending.c)
 *     MiZeroBootLargePages @ 0x1401858A4 (MiZeroBootLargePages.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x14018B540 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x14018CF20 (MiMappedPageWriter.c)
 *     MiFreeUnusedPfnPages @ 0x14019D250 (MiFreeUnusedPfnPages.c)
 *     KiEpfStart @ 0x1402B3184 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x1402CA7FC (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1402CC148 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x1402CD278 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x1402D6340 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x1402E53D8 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x14089CC84 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1408C64D4 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CCDEC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiFastExitThreadWait @ 0x1401193C4 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $911DE60733D53BFA0F115C3A981F3323 *v5; // rdi
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
