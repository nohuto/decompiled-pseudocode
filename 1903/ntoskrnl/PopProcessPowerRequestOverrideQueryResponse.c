/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x1400EC750
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406A1068 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400ED0B8 (PopQueuePowerRequestCallbacks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopProcessDisplayRequiredChange @ 0x14069DF70 (PopProcessDisplayRequiredChange.c)
 *     PopPowerRequestFindEntryById @ 0x14069FA34 (PopPowerRequestFindEntryById.c)
 *     PopReleasePowerRequestPushLock @ 0x14069FCA8 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r13d
  void *v3; // rsi
  unsigned int v4; // r12d
  __int64 *EntryById; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  bool v8; // zf
  unsigned int v9; // r15d
  unsigned __int8 OldIrql; // bl
  LONG_PTR result; // rax
  int v12; // edi
  int v13; // r14d
  int *v14; // rax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
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
    v6 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v8 = *(_DWORD *)(v6 + 24) == v1;
    v9 = *(_DWORD *)(v6 + 24) ^ v1;
    *(_DWORD *)(v6 + 24) = v1;
    if ( !v8 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v12, v9);
        v13 = 1 << v12;
        if ( *(_DWORD *)(v6 + 4LL * v12 + 32) )
        {
          if ( !v12 && *(_QWORD *)(v6 + 120) )
          {
            v3 = *(void **)(v6 + 120);
            ObfReferenceObjectWithTag(v3, 0x72506F50u);
          }
          v14 = &PopPowerRequestAttributes[4 * v12];
          v15 = *v14;
          if ( (v13 & v1) != 0 )
          {
            v16 = v15 - 1;
            v4 = 2;
            *v14 = v16;
            if ( !v12 || v12 == 3 || !v16 )
              --*(_BYTE *)(v6 + v12 + 72);
          }
          else
          {
            v4 = 1;
            if ( v15 != -1 )
            {
              v17 = v15 + 1;
              *v14 = v17;
              if ( !v12 || v12 == 3 || v17 == 1 )
                ++*(_BYTE *)(v6 + v12 + 72);
            }
          }
        }
        v9 &= ~v13;
      }
      while ( v9 );
    }
    LOBYTE(v7) = 1;
    PopQueuePowerRequestCallbacks(v6, v7);
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
  result = PopReleasePowerRequestPushLock();
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    return ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  return result;
}
