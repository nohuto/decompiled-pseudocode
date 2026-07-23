/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1400189C0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8670 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCancelNotify @ 0x14011B180 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14011B510 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E20C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14026F9E0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14026FB48 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x14028D290 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlCheckUpperOplock @ 0x1405864A0 (FsRtlCheckUpperOplock.c)
 *     LOCK_TRANSACTION_LIST @ 0x1405AA400 (LOCK_TRANSACTION_LIST.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyTriggerCheck @ 0x1405DD1A8 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpRunDownCmRM @ 0x140694174 (CmpRunDownCmRM.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140694830 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069491C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140694BFC (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406950AC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransMgrRollback @ 0x1406953B4 (CmpTransMgrRollback.c)
 *     CmKtmNotification @ 0x140695470 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x140695928 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406959E0 (CmpIsCmRm.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A1DA0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A2860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1406A2B80 (FsRtlNotifyCleanup.c)
 *     FsRtlOplockBreakH @ 0x1406C5F30 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     SepNotifyFileSystems @ 0x1406D05B0 (SepNotifyFileSystems.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FBBF8 (CmpTransInitializeTransaction.c)
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140703018 (CmpLogCheckpoint.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140761660 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x1407F732C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407F7440 (CmpLazyCommitWorker.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1408164FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140816638 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140817BB0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140844E10 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1408A3750 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408A37F0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408A38C0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D2068 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D3760 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1408D4870 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408D4A00 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D51E0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D5690 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1408D5880 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D59A0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1408D5C10 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1408D5F10 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1408D6190 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D6240 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D6550 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1408D6760 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1408D6970 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D6B80 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
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
    && byte_14043CA10[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
