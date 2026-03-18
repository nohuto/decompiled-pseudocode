/*
 * XREFs of IopGetMountFlag @ 0x140089560
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 CurrentIrql; // r14
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = SchedulerAssist[5];
      SchedulerAssist[5] = v15 + 1;
      if ( v15 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v4, v8);
  }
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 && (*(_BYTE *)(v9 + 4) & 1) != 0 )
    v2 = 1;
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(v10);
  v11 = (__int64)*v10;
  if ( *v10 )
    goto LABEL_16;
  if ( v10 != (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
  {
    v11 = KxWaitForLockChainValid((__int64 *)v10);
LABEL_16:
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
  }
LABEL_12:
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v16 = v13[5] - 1;
      v13[5] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(CurrentIrql);
  return v2;
}
