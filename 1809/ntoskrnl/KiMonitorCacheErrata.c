/*
 * XREFs of KiMonitorCacheErrata @ 0x14029A680
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1401151F0 (KiTryToAcquireThreadLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquirePrcbLock @ 0x14028F8EC (KiTryToAcquirePrcbLock.c)
 *     MmReadProcessPageTables @ 0x1402BBA8C (MmReadProcessPageTables.c)
 */

__int64 KiMonitorCacheErrata()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v1; // r15
  __int64 v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rbp
  struct _KPRCB *v10; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v12; // eax
  struct _KPRCB *v13; // rcx
  char v14; // [rsp+60h] [rbp+18h] BYREF
  char v15; // [rsp+68h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (_DWORD *)KiCacheErrataMonitor;
  v2 = KiCacheErrataMonitor + 16 * (CurrentPrcb->Number + 16LL);
  _InterlockedExchange64((volatile __int64 *)v2, -1LL);
  *(_DWORD *)(v2 + 8) -= KiSanitizedProfileInterval;
  result = *(unsigned int *)(v2 + 8);
  if ( (int)result <= 0 )
  {
    v4 = &v1[4 * *(unsigned int *)(v2 + 12) + 64];
    if ( (volatile signed __int32 *)v2 != v4 && !_interlockedbittestandreset64(v4, CurrentPrcb->Number) )
    {
      v5 = 0LL;
      v6 = KiProcessorBlock[*(unsigned int *)(v2 + 12)];
      v7 = *(_QWORD *)(v6 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( KiTryToAcquirePrcbLock(v6, &v14) )
      {
        v9 = *(_QWORD *)(v6 + 8);
        if ( KiTryToAcquireThreadLock(v9, &v15) )
        {
          v5 = *(_QWORD *)(v9 + 184);
          if ( (_UNKNOWN *)v5 != &KiInitialProcess )
            v5 &= -(__int64)(ObReferenceObjectSafeWithTag(*(_QWORD *)(v9 + 184)) != 0);
          KiReleaseThreadLockSafe(v9);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
        v10 = KeGetCurrentPrcb();
        SchedulerAssist = v10->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v12 = SchedulerAssist[5] - 1;
            SchedulerAssist[5] = v12;
            if ( !v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v10);
          }
        }
      }
      if ( v7 == *(_QWORD *)(v6 + 8) )
        MmReadProcessPageTables(v6);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v13 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
      __writecr8(CurrentIrql);
      if ( v5 )
      {
        if ( (_UNKNOWN *)v5 != &KiInitialProcess )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v5, 0x61727245u);
      }
    }
    *(_DWORD *)(v2 + 8) = *v1;
    result = (*(_DWORD *)(v2 + 12) + 1) / (unsigned int)KeNumberProcessors_0;
    *(_DWORD *)(v2 + 12) = (*(_DWORD *)(v2 + 12) + 1) % (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
