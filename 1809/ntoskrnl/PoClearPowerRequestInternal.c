/*
 * XREFs of PoClearPowerRequestInternal @ 0x1400027C4
 * Callers:
 *     PoClearPowerRequest @ 0x140001ED0 (PoClearPowerRequest.c)
 *     PpmEndHighPerfRequest @ 0x140177C08 (PpmEndHighPerfRequest.c)
 *     PpmHighPerfRequestExpiration @ 0x1401781F0 (PpmHighPerfRequestExpiration.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E33B4 (PpmDisableHighPerfRequestDeferredExpiration.c)
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

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, signed int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v5; // ebx
  void *v6; // rbp
  unsigned int v7; // r13d
  __int64 v8; // r9
  int v9; // ecx
  int v10; // eax
  unsigned __int8 OldIrql; // r14
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned int)a2 > 5 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 || !*(_DWORD *)(a1 + 4LL * a2 + 32) )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_5;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 120) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_5:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v9 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v9;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v9 )
  {
    v10 = PopPowerRequestAttributes[4 * v2] - 1;
    PopPowerRequestAttributes[4 * v2] = v10;
    if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || !v10 )
    {
      LOBYTE(v8) = CurrentIrql >= 2u;
      PopQueuePowerRequestCallback(a1, (unsigned int)v2, 0LL, v8);
    }
    if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 120) && CurrentIrql < 2u )
    {
      v6 = *(void **)(a1 + 120);
      ObfReferenceObjectWithTag(v6, 0x72506F50u);
      v7 = 2;
    }
  }
  PopDiagTracePowerRequestChange(a1);
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
  if ( v6 )
  {
    PopProcessDisplayRequiredChange(v6, v7);
    ObfDereferenceObjectWithTag(v6, 0x72506F50u);
  }
  return v5;
}
