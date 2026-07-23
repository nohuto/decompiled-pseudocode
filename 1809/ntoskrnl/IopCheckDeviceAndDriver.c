/*
 * XREFs of IopCheckDeviceAndDriver @ 0x1400B9850
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rdi
  volatile __int64 *v7; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v10; // rdx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  volatile signed __int64 **v14; // rbx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = SchedulerAssist[5];
      SchedulerAssist[5] = v19 + 1;
      if ( v19 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v7);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v6);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)v6, v10, a3);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v11 = *(_DWORD *)(a2 + 48), (v11 & 0x80u) != 0) )
  {
    v13 = -1073741810;
  }
  else if ( (v11 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v12 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v12;
    if ( v12 <= 0 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      if ( v20 )
      {
        IoAddTriageDumpDataBlock(v20, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v12 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v12);
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741790;
  }
  v14 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v14, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v14);
  v15 = (__int64)*v14;
  if ( *v14 )
    goto LABEL_18;
  if ( v14 != (volatile signed __int64 **)_InterlockedCompareExchange64(v14[1], 0LL, (signed __int64)v14) )
  {
    v15 = KxWaitForLockChainValid((__int64 *)v14);
LABEL_18:
    *v14 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_14:
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v21 = v17[5] - 1;
      v17[5] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(CurrentIrql);
  return v13;
}
