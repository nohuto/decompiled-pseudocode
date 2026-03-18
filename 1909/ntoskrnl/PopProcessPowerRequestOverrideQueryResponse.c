/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x1400D88B0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14069DBA8 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400D6834 (PopQueuePowerRequestCallbacks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1406721B4 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestFindEntryById @ 0x140673140 (PopPowerRequestFindEntryById.c)
 *     PopProcessDisplayRequiredChange @ 0x1406F0DAC (PopProcessDisplayRequiredChange.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r13d
  void *v3; // rsi
  unsigned int v4; // r12d
  __int64 *EntryById; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  bool v9; // zf
  unsigned int v10; // r15d
  unsigned __int8 OldIrql; // bl
  LONG_PTR result; // rax
  int v13; // edi
  int v14; // r14d
  int *v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  v4 = 0;
  PopAcquirePowerRequestPushLock(0LL);
  EntryById = (__int64 *)PopPowerRequestFindEntryById(*a1);
  if ( EntryById )
  {
    v8 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v9 = *(_DWORD *)(v8 + 24) == v1;
    v10 = *(_DWORD *)(v8 + 24) ^ v1;
    *(_DWORD *)(v8 + 24) = v1;
    if ( !v9 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v13, v10);
        v14 = 1 << v13;
        if ( *(_DWORD *)(v8 + 4LL * v13 + 32) )
        {
          if ( !v13 && *(_QWORD *)(v8 + 120) )
          {
            v3 = *(void **)(v8 + 120);
            ObfReferenceObjectWithTag(v3, 0x72506F50u);
          }
          v15 = &PopPowerRequestAttributes[4 * v13];
          v16 = *v15;
          if ( (v14 & v1) != 0 )
          {
            v17 = v16 - 1;
            v4 = 2;
            *v15 = v17;
            if ( !v13 || v13 == 3 || !v17 )
              --*(_BYTE *)(v8 + v13 + 72);
          }
          else
          {
            v4 = 1;
            if ( v16 != -1 )
            {
              v18 = v16 + 1;
              *v15 = v18;
              if ( !v13 || v13 == 3 || v18 == 1 )
                ++*(_BYTE *)(v8 + v13 + 72);
            }
          }
        }
        v10 &= ~v14;
      }
      while ( v10 );
    }
    PopQueuePowerRequestCallbacks(v8, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  result = PopReleasePowerRequestPushLock(v7, v6);
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    return ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  return result;
}
