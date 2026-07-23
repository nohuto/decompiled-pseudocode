/*
 * XREFs of PopPowerRequestCleanUp @ 0x14000333C
 * Callers:
 *     PopClosePowerRequestObject @ 0x1405892C0 (PopClosePowerRequestObject.c)
 *     PoDeletePowerRequest @ 0x140589E00 (PoDeletePowerRequest.c)
 *     PopDeletePowerRequestObject @ 0x14058AA20 (PopDeletePowerRequestObject.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     PopPowerRequestExecuteCallbacks @ 0x1400038BC (PopPowerRequestExecuteCallbacks.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x1405896DC (PopNotifySessionUserPowerRequestDeleted.c)
 *     PopProcessDisplayRequiredChange @ 0x1405896FC (PopProcessDisplayRequiredChange.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestDeleteEntryById @ 0x14058AA34 (PopPowerRequestDeleteEntryById.c)
 *     PopReleasePowerRequestPushLock @ 0x14058AA6C (PopReleasePowerRequestPushLock.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14058AA88 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x14058AB2C (PopDiagTracePowerRequestClose.c)
 *     PopStatsDeletePowerRequest @ 0x14058ABBC (PopStatsDeletePowerRequest.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14058AD2C (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 */

void __fastcall PopPowerRequestCleanUp(unsigned int *Object)
{
  char v1; // si
  void *v2; // rdi
  unsigned int v3; // r14d
  unsigned int *v4; // rbx
  unsigned int **v5; // rax
  PVOID *v6; // rcx
  char v7; // r15
  unsigned int **v8; // rdx
  PVOID *v9; // rcx
  unsigned int v10; // ecx
  int *v11; // r8
  __int64 v12; // rdx
  _DWORD *v13; // r9
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int8 OldIrql; // bp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_BYTE *)Object + 128);
  v2 = 0LL;
  v3 = 0;
  v4 = Object;
  if ( !*(_QWORD *)Object )
    return;
  LOBYTE(Object) = 1;
  PopAcquirePowerRequestPushLock(Object);
  v5 = *(unsigned int ***)v4;
  if ( !*(_QWORD *)v4 )
  {
    PopReleasePowerRequestPushLock();
    return;
  }
  v6 = (PVOID *)*((_QWORD *)v4 + 1);
  if ( v5[1] != v4 || *v6 != v4 )
    goto LABEL_50;
  *v6 = v5;
  v5[1] = (unsigned int *)v6;
  *(_QWORD *)v4 = 0LL;
  if ( v4[11] && (byte_1404192F4 || v1) )
  {
    v4[11] = 0;
    if ( !v1 && (v4[6] & 8) == 0 )
      --dword_1403FF7A0;
  }
  if ( (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(v4) )
    PopUpdatePowerRequestProcessWakeCounter(v4, 0LL);
  if ( *((_QWORD *)v4 + 15) )
  {
    v2 = (void *)*((_QWORD *)v4 + 15);
    ObfReferenceObjectWithTag(v2, 0x72506F50u);
    *((_QWORD *)v4 + 15) = 0LL;
  }
  if ( v1 )
    --PopSpecialPowerRequestObjectCount;
  else
    --PopPowerRequestObjectCount;
  PopPowerRequestDeleteEntryById(v4[7]);
  PopReleasePowerRequestPushLock();
  PopStatsDeletePowerRequest(v4);
  PopDiagTracePowerRequestClose(v4);
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v7 = *((_BYTE *)v4 + 78);
  if ( !v7 )
    goto LABEL_24;
  v8 = (unsigned int **)*((_QWORD *)v4 + 7);
  v9 = (PVOID *)*((_QWORD *)v4 + 8);
  if ( v8[1] != v4 + 14 || *v9 != v4 + 14 )
LABEL_50:
    __fastfail(3u);
  *v9 = v8;
  v8[1] = (unsigned int *)v9;
  *((_BYTE *)v4 + 78) = 0;
LABEL_24:
  v10 = 0;
  v11 = PopPowerRequestAttributes;
  v12 = 0LL;
  v13 = v4 + 8;
  do
  {
    v14 = v4[6];
    if ( !_bittest((const int *)&v14, v10) && *v13 )
    {
      v15 = *v11 - 1;
      *v11 = v15;
      if ( !v10 || v10 == 3 || !v15 )
        --*((_BYTE *)v4 + v12 + 72);
      if ( !v10 )
        v3 = 2;
    }
    ++v10;
    ++v12;
    ++v13;
    v11 += 4;
  }
  while ( v10 < 6 );
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  __writecr8(OldIrql);
  PopPowerRequestExecuteCallbacks(v4 + 18, v4[7], v4[4]);
  if ( v7 )
    ObfDereferenceObjectWithTag(v4, 0x72506F50u);
  PoDestroyReasonContext(*((PVOID *)v4 + 10));
  if ( v4[22] )
    PopNotifySessionUserPowerRequestDeleted(v4[4], v4[7]);
  if ( !v1 )
    PopUmpoSendPowerRequestOverrideCleanup(v4);
  if ( v2 )
  {
    PopProcessDisplayRequiredChange(v2, v3);
    ObfDereferenceObjectWithTag(v2, 0x72506F50u);
  }
  if ( v1 )
  {
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x72506F50u);
  }
}
