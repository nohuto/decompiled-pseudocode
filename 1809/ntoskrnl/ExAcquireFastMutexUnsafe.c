/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1400189C0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C60 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8710 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCancelNotify @ 0x14011B0F0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14011B480 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E0EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168D80 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14026F6F0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14026F858 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x14028CFA0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlCheckUpperOplock @ 0x1405854A0 (FsRtlCheckUpperOplock.c)
 *     LOCK_TRANSACTION_LIST @ 0x1405A9400 (LOCK_TRANSACTION_LIST.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyTriggerCheck @ 0x1405DC1A8 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405DC29C (CmpPostNotify.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DC640 (FsRtlpOplockFsctrlInternal.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     CmpRunDownCmRM @ 0x140692FD4 (CmpRunDownCmRM.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140693690 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069377C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140693A5C (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140693F0C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransMgrRollback @ 0x140694214 (CmpTransMgrRollback.c)
 *     CmKtmNotification @ 0x1406942D0 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x140694788 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x140694840 (CmpIsCmRm.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A0B20 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E80 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A15E0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1406A1900 (FsRtlNotifyCleanup.c)
 *     FsRtlOplockBreakH @ 0x1406C4CB0 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x1406CDC48 (CmRmFinalizeRecovery.c)
 *     SepNotifyFileSystems @ 0x1406CF330 (SepNotifyFileSystems.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6E8 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FA978 (CmpTransInitializeTransaction.c)
 *     CmpTransMgrPrepare @ 0x1406FCDFC (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140701D98 (CmpLogCheckpoint.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140760490 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x1407F614C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407F6260 (CmpLazyCommitWorker.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14081531C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140815458 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x1408169D0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140843BD0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1408A2510 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408A25B0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408A2680 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D0DC8 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1408D172C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1EEC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D24C0 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1408D35D0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408D3760 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1408D38F0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F40 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D43F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1408D45E0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D4700 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1408D4970 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1408D4C70 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1408D4EF0 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4FA0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D52B0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1408D54C0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1408D56D0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D58E0 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030F934 (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rsi
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v10 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  LOBYTE(v4) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v4 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    CurrentThread->AbEntrySummary = v4;
  }
  v5 = v4;
  _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
  v11 = v4;
  CurrentThread->AbEntrySummary = v5 & ~(1 << v4);
  v2 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v2 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_14043B950[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v2 + 40) = SessionId;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, FastMutex, &v10);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
