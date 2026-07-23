/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x14000327C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14058C0C0 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x1400031E0 (PopQueuePowerRequestCallbacks.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopProcessDisplayRequiredChange @ 0x1405896FC (PopProcessDisplayRequiredChange.c)
 *     PopPowerRequestFindEntryById @ 0x14058A950 (PopPowerRequestFindEntryById.c)
 *     PopReleasePowerRequestPushLock @ 0x14058AA6C (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r13d
  void *v3; // rsi
  unsigned int v4; // r12d
  __int64 *EntryById; // rax
  __int64 v6; // rbx
  bool v7; // zf
  unsigned int v8; // r15d
  unsigned __int8 OldIrql; // bl
  LONG_PTR result; // rax
  int v11; // edi
  int v12; // r14d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1[2];
  v3 = 0LL;
  v4 = 0;
  PopAcquirePowerRequestPushLock(0LL);
  EntryById = (__int64 *)PopPowerRequestFindEntryById(*a1);
  if ( EntryById )
  {
    v6 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v7 = *(_DWORD *)(v6 + 24) == v1;
    v8 = *(_DWORD *)(v6 + 24) ^ v1;
    *(_DWORD *)(v6 + 24) = v1;
    if ( !v7 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v11, v8);
        v12 = 1 << v11;
        if ( *(_DWORD *)(v6 + 4LL * v11 + 32) )
        {
          if ( !v11 && *(_QWORD *)(v6 + 120) )
          {
            v3 = *(void **)(v6 + 120);
            ObfReferenceObjectWithTag(v3, 0x72506F50u);
          }
          v13 = PopPowerRequestAttributes[4 * v11];
          if ( (v12 & v1) != 0 )
          {
            v14 = v13 - 1;
            v4 = 2;
            PopPowerRequestAttributes[4 * v11] = v14;
            if ( !v11 || v11 == 3 || !v14 )
              --*(_BYTE *)(v6 + v11 + 72);
          }
          else
          {
            v4 = 1;
            if ( v13 != -1 )
            {
              v15 = v13 + 1;
              PopPowerRequestAttributes[4 * v11] = v15;
              if ( !v11 || v11 == 3 || v15 == 1 )
                ++*(_BYTE *)(v6 + v11 + 72);
            }
          }
        }
        v8 &= ~v12;
      }
      while ( v8 );
    }
    PopQueuePowerRequestCallbacks(v6, 1);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
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
