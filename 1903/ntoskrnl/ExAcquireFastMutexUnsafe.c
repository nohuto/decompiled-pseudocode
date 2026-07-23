/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1400888B0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140047050 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlUninitializeOplock @ 0x140088520 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016F550 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1402833A0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283508 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1402A3140 (KeAcquireGuardedMutexUnsafe.c)
 *     SepNotifyFileSystems @ 0x1405B5210 (SepNotifyFileSystems.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 *     CmNotifyRunDown @ 0x14060D8F0 (CmNotifyRunDown.c)
 *     LOCK_POST_LIST @ 0x14062C2C0 (LOCK_POST_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14062C2DC (LOCK_TRANSACTION_LIST.c)
 *     CmpNotifyTriggerCheck @ 0x14062D7B4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x14062D830 (CmpPostNotify.c)
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406355A8 (CmpTransSearchAddLightWeightTrans.c)
 *     FsRtlOplockBreakH @ 0x1406827D0 (FsRtlOplockBreakH.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpTransInitializeTransaction @ 0x140699834 (CmpTransInitializeTransaction.c)
 *     CmpIsCmRm @ 0x140699C94 (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x14069A174 (CmpLogCheckpoint.c)
 *     LOCK_CM_RM_LIST @ 0x14069BB1C (LOCK_CM_RM_LIST.c)
 *     CmSnapshotRMTxArray @ 0x14069BCD0 (CmSnapshotRMTxArray.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C1F80 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C22E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1406C2AA0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C2B30 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E1F44 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E2020 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406E2138 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E2234 (CmpPrepareLightWeightTransaction.c)
 *     FsRtlCheckUpperOplock @ 0x1406EFFF0 (FsRtlCheckUpperOplock.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140787940 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmpQueueLazyCommitWorker @ 0x14082F1D4 (CmpQueueLazyCommitWorker.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14084EDEC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14084EF28 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x1408504D0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14087F660 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1408E0E10 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408E0EB0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408E0F80 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E5E0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14090EF38 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F718 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090FD14 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x140910E80 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140911010 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1409111A0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409117E0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140911C90 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140911E80 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140911FA0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140912210 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140912510 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140912790 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140912840 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140912B60 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140912D60 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140912F70 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140913170 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rsi
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  bool v7; // zf
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v9 = 0;
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
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v5 = v4;
  _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
  v10 = v4;
  CurrentThread->AbEntrySummary = v5 & ~(1 << v4);
  v2 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v2 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_140467440[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v2 + 40) = SessionId;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)FastMutex, &v9);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
