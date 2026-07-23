/*
 * XREFs of KeQueryAffinityProcess @ 0x1400F1260
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, _OWORD *a2, int *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  _OWORD *v9; // rbx
  unsigned int v10; // ebx
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
  v10 = *(_DWORD *)(a1 + 440);
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 528);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 544);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 560);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = (v10 >> 10) & 0xFFFFF;
  return result;
}
