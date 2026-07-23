/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140089BB0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400470F0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlUninitializeOplock @ 0x140089820 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016FC40 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401748C4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140283100 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283268 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1402A2EA0 (KeAcquireGuardedMutexUnsafe.c)
 *     SepNotifyFileSystems @ 0x1405B55F0 (SepNotifyFileSystems.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E5450 (FsRtlpOplockFsctrlInternal.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 *     LOCK_POST_LIST @ 0x140630110 (LOCK_POST_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14063012C (LOCK_TRANSACTION_LIST.c)
 *     CmpNotifyTriggerCheck @ 0x140631604 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406387F8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     FsRtlOplockBreakH @ 0x1406B2730 (FsRtlOplockBreakH.c)
 *     LOCK_CM_RM_LIST @ 0x1406BAA4C (LOCK_CM_RM_LIST.c)
 *     CmSnapshotRMTxArray @ 0x1406BABA4 (CmSnapshotRMTxArray.c)
 *     CmpTransInitializeTransaction @ 0x1406BAD38 (CmpTransInitializeTransaction.c)
 *     CmpIsCmRm @ 0x1406BB194 (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x1406BBB5C (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1406BBEAC (CmpLogCheckpoint.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C0810 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C1170 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C14D0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1406C1C90 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C1D20 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E35C4 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E36A0 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406E37B8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E38B4 (CmpPrepareLightWeightTransaction.c)
 *     FsRtlCheckUpperOplock @ 0x1406F1A90 (FsRtlCheckUpperOplock.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140789DA0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmpQueueLazyCommitWorker @ 0x14082F044 (CmpQueueLazyCommitWorker.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14084E4EC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14084E628 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14084FBD0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14087ED60 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1408E0710 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408E07B0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408E0880 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E040 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14090E998 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F178 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090F774 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409108E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140910A70 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x140910C00 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140911240 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409116F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1409118E0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140911A00 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140911C70 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140911F70 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409121F0 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409122A0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1409125C0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409127C0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1409129D0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140912BD0 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
    && byte_140467140[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v7 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
