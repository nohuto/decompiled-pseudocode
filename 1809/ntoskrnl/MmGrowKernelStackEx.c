/*
 * XREFs of MmGrowKernelStackEx @ 0x140132FA0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9BC0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x1401C0460 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x1402AB890 (MmGrowKernelStack.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentThread; // rsi
  unsigned int v3; // ebp
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(CurrentThread + 56) - (*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(CurrentThread + 544) + 1454LL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 < ((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
  {
    if ( v6 < ((*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_14043BD38;
      v3 = -1073741571;
    }
    else
    {
      v7 = ((__int64)(((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL - v6) >> 3) + 1;
      if ( (unsigned int)MiChargeResident((ULONG_PTR *)v4, v7, 0LL) )
      {
        v11 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
        if ( (unsigned int)MiAllocateKernelStackPages(
                             v4,
                             v6,
                             v7,
                             CurrentThread | 1,
                             *(_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 58,
                             2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v6 << 25) >> 16;
        }
        else
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7360), v7);
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v3;
}
