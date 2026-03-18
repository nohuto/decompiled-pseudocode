/*
 * XREFs of PopPowerRequestCleanUp @ 0x1400D6160
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PopDeletePowerRequestObject @ 0x140672220 (PopDeletePowerRequestObject.c)
 *     PoDeletePowerRequest @ 0x1406F0730 (PoDeletePowerRequest.c)
 *     PopClosePowerRequestObject @ 0x1406F1190 (PopClosePowerRequestObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     PopPowerRequestExecuteCallbacks @ 0x1400D6A08 (PopPowerRequestExecuteCallbacks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x140671A30 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopStatsDeletePowerRequest @ 0x140671F10 (PopStatsDeletePowerRequest.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140672080 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x140672124 (PopDiagTracePowerRequestClose.c)
 *     PopReleasePowerRequestPushLock @ 0x1406721B4 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestDeleteEntryById @ 0x1406721D0 (PopPowerRequestDeleteEntryById.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x1406EFA50 (PopNotifySessionUserPowerRequestDeleted.c)
 *     PopProcessDisplayRequiredChange @ 0x1406F0DAC (PopProcessDisplayRequiredChange.c)
 */

LONG_PTR __fastcall PopPowerRequestCleanUp(unsigned int *Object)
{
  char v1; // bp
  LONG_PTR result; // rax
  void *v3; // rdi
  unsigned int v4; // r14d
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int **v8; // rax
  PVOID *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r15
  unsigned int v13; // ecx
  int *v14; // r8
  __int64 v15; // rdx
  _DWORD *v16; // r9
  unsigned int v17; // eax
  unsigned __int8 OldIrql; // si
  int v19; // eax
  unsigned int **v20; // rdx
  PVOID *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_BYTE *)Object + 128);
  result = 0LL;
  v3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = Object;
  if ( !*(_QWORD *)Object )
    return result;
  LOBYTE(Object) = 1;
  PopAcquirePowerRequestPushLock(Object);
  v8 = *(unsigned int ***)v5;
  if ( !*(_QWORD *)v5 )
    return PopReleasePowerRequestPushLock(v7, v6);
  v9 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( v8[1] != v5 || *v9 != v5 )
    goto LABEL_48;
  *v9 = v8;
  v8[1] = (unsigned int *)v9;
  *(_QWORD *)v5 = 0LL;
  if ( v5[11] && (byte_140443B94 || v1) )
  {
    v5[11] = 0;
    if ( !v1 && (v5[6] & 8) == 0 )
      --dword_1404247A0;
  }
  if ( (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(v5) )
    PopUpdatePowerRequestProcessWakeCounter(v5, 0LL);
  if ( *((_QWORD *)v5 + 15) )
  {
    v3 = (void *)*((_QWORD *)v5 + 15);
    ObfReferenceObjectWithTag(v3, 0x72506F50u);
    *((_QWORD *)v5 + 15) = 0LL;
  }
  if ( v1 )
    --PopSpecialPowerRequestObjectCount;
  else
    --PopPowerRequestObjectCount;
  PopPowerRequestDeleteEntryById(v5[7]);
  PopReleasePowerRequestPushLock(v11, v10);
  PopStatsDeletePowerRequest(v5);
  PopDiagTracePowerRequestClose(v5);
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v12 = *((_BYTE *)v5 + 78);
  if ( !v12 )
    goto LABEL_13;
  v20 = (unsigned int **)*((_QWORD *)v5 + 7);
  v21 = (PVOID *)*((_QWORD *)v5 + 8);
  if ( v20[1] != v5 + 14 || *v21 != v5 + 14 )
LABEL_48:
    __fastfail(3u);
  *v21 = v20;
  v20[1] = (unsigned int *)v21;
  *((_BYTE *)v5 + 78) = 0;
LABEL_13:
  v13 = 0;
  v14 = PopPowerRequestAttributes;
  v15 = 0LL;
  v16 = v5 + 8;
  do
  {
    v17 = v5[6];
    if ( !_bittest((const int *)&v17, v13) && *v16 )
    {
      v19 = *v14 - 1;
      *v14 = v19;
      if ( !v13 || v13 == 3 || !v19 )
        --*((_BYTE *)v5 + v15 + 72);
      if ( !v13 )
        v4 = 2;
    }
    ++v13;
    ++v15;
    ++v16;
    v14 += 4;
  }
  while ( v13 < 6 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  PopPowerRequestExecuteCallbacks(v5 + 18, v5[7], v5[4]);
  if ( v12 )
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  result = PoDestroyReasonContext(*((PVOID *)v5 + 10));
  if ( v5[22] )
    result = PopNotifySessionUserPowerRequestDeleted(v5[4], v5[7]);
  if ( !v1 )
    result = PopUmpoSendPowerRequestOverrideCleanup(v5);
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    return ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  return result;
}
