/*
 * XREFs of PoClearPowerRequestInternal @ 0x1400D6A84
 * Callers:
 *     PoClearPowerRequest @ 0x140105A40 (PoClearPowerRequest.c)
 *     PpmEndHighPerfRequest @ 0x140181C5C (PpmEndHighPerfRequest.c)
 *     PpmHighPerfRequestExpiration @ 0x140182410 (PpmHighPerfRequestExpiration.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FF9A4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopPowerRequestActionInfo @ 0x1406723B0 (PopPowerRequestActionInfo.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400D66D4 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x1400D67F8 (PopQueuePowerRequestCallback.c)
 *     PopPowerRequestCallbackWorker @ 0x1400D68D0 (PopPowerRequestCallbackWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1406721B4 (PopReleasePowerRequestPushLock.c)
 *     PopProcessDisplayRequiredChange @ 0x1406F0DAC (PopProcessDisplayRequiredChange.c)
 */

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, signed int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v5; // ebx
  void *v6; // rbp
  unsigned int v7; // r13d
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // r14
  _KPROCESS *Process; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
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
  v8 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v8;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v8 )
  {
    v9 = PopPowerRequestAttributes[4 * v2] - 1;
    PopPowerRequestAttributes[4 * v2] = v9;
    if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || !v9 )
      PopQueuePowerRequestCallback(a1, v2, 0LL, CurrentIrql >= 2u);
    if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 120) && CurrentIrql < 2u )
    {
      v6 = *(void **)(a1 + 120);
      ObfReferenceObjectWithTag(v6, 0x72506F50u);
      v7 = 2;
    }
  }
  PopDiagTracePowerRequestChange(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock(v11, v10);
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker();
  if ( v6 )
  {
    PopProcessDisplayRequiredChange(v6, v7);
    ObfDereferenceObjectWithTag(v6, 0x72506F50u);
  }
  return v5;
}
