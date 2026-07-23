/*
 * XREFs of PoSetPowerRequestInternal @ 0x140002E88
 * Callers:
 *     PoSetPowerRequest @ 0x140001FD0 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401786C0 (PpmBeginHighPerfRequest.c)
 *     PopPowerRequestActionInfo @ 0x140589A30 (PopPowerRequestActionInfo.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x140003064 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x1400031A4 (PopQueuePowerRequestCallback.c)
 *     PopPowerRequestCallbackWorker @ 0x140003790 (PopPowerRequestCallbackWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopProcessDisplayRequiredChange @ 0x1405896FC (PopProcessDisplayRequiredChange.c)
 *     PopReleasePowerRequestPushLock @ 0x14058AA6C (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r15
  void *v5; // rbp
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // r8d
  int v10; // r8d
  int *v11; // r8
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int8 OldIrql; // r14
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (int)a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0LL;
  v6 = 0;
  if ( a2 > 5 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_4;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 120) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_4:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v7 = a1 + 4 * v2;
  v8 = 0xFFFFFFFFLL;
  v9 = *(_DWORD *)(v7 + 32);
  if ( v9 == -1 )
  {
    v14 = -1073741675;
  }
  else
  {
    v10 = v9 + 1;
    *(_DWORD *)(v7 + 32) = v10;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) != 0 || v10 != 1 )
    {
LABEL_12:
      PopDiagTracePowerRequestChange(a1);
      v14 = 0;
      goto LABEL_13;
    }
    v11 = PopPowerRequestAttributes;
    v12 = PopPowerRequestAttributes[4 * v2];
    if ( v12 != -1 )
    {
      v13 = v12 + 1;
      PopPowerRequestAttributes[4 * v2] = v13;
      if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v13 == 1 )
      {
        LOBYTE(v11) = 1;
        LOBYTE(v8) = CurrentIrql >= 2u;
        PopQueuePowerRequestCallback(a1, (unsigned int)v2, v11, v8);
      }
      if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 120) && CurrentIrql < 2u )
      {
        v5 = *(void **)(a1 + 120);
        ObfReferenceObjectWithTag(v5, 0x72506F50u);
        v6 = 1;
      }
      goto LABEL_12;
    }
    *(_DWORD *)(v7 + 32) = 0;
    v14 = -1073741675;
  }
LABEL_13:
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  __writecr8(OldIrql);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker(0LL);
  if ( v5 )
  {
    PopProcessDisplayRequiredChange(v5, v6);
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  }
  return v14;
}
