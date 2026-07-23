/*
 * XREFs of MiPerformMemoryChange @ 0x1402A6E18
 * Callers:
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14017F9F8 (MiInitializeNonPagedPoolThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, char a5)
{
  KIRQL v9; // bp
  void *v10; // r9
  void *v11; // rdx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v9 = ExAcquireSpinLockExclusive(&dword_14043DAC0);
  v10 = *a3;
  v11 = 0LL;
  v12 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v13 = qword_14043DA20;
  if ( v12 )
    v11 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v10;
  *a3 = v11;
  v12 = (*(_QWORD *)(v13 - 8))-- == 1LL;
  v14 = 0LL;
  v15 = *a4;
  if ( v12 )
    v14 = qword_14043DA20;
  v16 = a1 + a2 - 1;
  *a4 = v14;
  qword_14043DA20 = v15;
  if ( (a5 & 1) == 0 )
  {
    if ( v16 == qword_14043F5C8 )
      qword_14043F5C8 = a1 - 1;
    qword_14043F5D0 -= a2;
    goto LABEL_13;
  }
  if ( v16 > qword_14043F5C8 )
    qword_14043F5C8 = a1 + a2 - 1;
  if ( (a5 & 4) == 0 )
  {
    qword_14043F5D0 += a2;
LABEL_13:
    byte_14043DA0C = 1;
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043DAC0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
