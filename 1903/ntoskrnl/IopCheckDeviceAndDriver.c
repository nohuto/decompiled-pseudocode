/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140043CA0
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rdi
  volatile __int64 *v6; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  struct _KPRCB *v20; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v6 = (volatile __int64 *)*((_QWORD *)v5 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = SchedulerAssist[5];
      SchedulerAssist[5] = v17 + 1;
      if ( v17 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v9 = *(_DWORD *)(a2 + 48), (v9 & 0x80u) != 0) )
  {
    v11 = -1073741810;
  }
  else if ( (v9 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v10;
    if ( v10 <= 0 )
    {
      v18 = *(_QWORD *)(a2 + 8);
      if ( v18 )
      {
        IoAddTriageDumpDataBlock(v18, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v10 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v10);
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741790;
  }
  v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v12);
  v13 = (__int64)*v12;
  if ( *v12 )
    goto LABEL_18;
  if ( v12 != (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
  {
    v13 = KxWaitForLockChainValid(v12);
LABEL_18:
    *v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_14:
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v19 = v15[5] - 1;
      v15[5] = v19;
      if ( !v19 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v20);
  }
  __writecr8(CurrentIrql);
  return v11;
}
