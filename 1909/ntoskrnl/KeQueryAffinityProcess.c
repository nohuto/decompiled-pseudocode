/*
 * XREFs of KeQueryAffinityProcess @ 0x1400065E0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, _OWORD *a2, _DWORD *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  _OWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  *a2 = *(_OWORD *)(a1 + 80);
  a2[1] = *(_OWORD *)(a1 + 96);
  a2[2] = *(_OWORD *)(a1 + 112);
  a2[3] = *(_OWORD *)(a1 + 128);
  a2[4] = *(_OWORD *)(a1 + 144);
  a2[5] = *(_OWORD *)(a1 + 160);
  a2[6] = *(_OWORD *)(a1 + 176);
  v9 = a2 + 8;
  *(v9 - 1) = *(_OWORD *)(a1 + 192);
  *v9 = *(_OWORD *)(a1 + 208);
  v9[1] = *(_OWORD *)(a1 + 224);
  *((_QWORD *)v9 + 4) = *(_QWORD *)(a1 + 240);
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 444);
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 532);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 548);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 564);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
