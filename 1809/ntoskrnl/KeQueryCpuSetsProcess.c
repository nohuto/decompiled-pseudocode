/*
 * XREFs of KeQueryCpuSetsProcess @ 0x1402967B4
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x14018CCF0 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v6; // esi
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v6 = 20;
  ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, a4, &v14);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v9 = v14;
  if ( v14 > 0x14 || (v6 = v14) != 0 )
  {
    v10 = ProcessCpuSetMaskPointer - (_QWORD)a2;
    v11 = v6;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v10);
      ++a2;
      --v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    v9 = v14;
  }
  __writecr8(CurrentIrql);
  return v9;
}
