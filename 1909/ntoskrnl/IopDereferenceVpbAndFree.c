/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140107E00
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140856330 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // rbp
  unsigned __int8 CurrentIrql; // r14
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  bool v9; // zf
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
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
      v14 = SchedulerAssist[5];
      SchedulerAssist[5] = v14 + 1;
      if ( v14 == -1 )
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
  v9 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v9 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v10);
  v11 = (__int64)*v10;
  if ( *v10 )
    goto LABEL_15;
  if ( v10 != (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
  {
    v11 = KxWaitForLockChainValid((__int64 *)v10);
LABEL_15:
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
  }
LABEL_10:
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v15 = v13[5] - 1;
      v13[5] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
