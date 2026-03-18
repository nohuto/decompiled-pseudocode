/*
 * XREFs of MiRemoveMappingNode @ 0x14017552C
 * Callers:
 *     MmFreeMappingAddress @ 0x140735D70 (MmFreeMappingAddress.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

unsigned __int64 *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rbp
  KIRQL v4; // al
  unsigned __int64 *v5; // rbx
  ULONG_PTR v6; // r8
  KIRQL v7; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_140466700);
  v5 = (unsigned __int64 *)qword_140466708;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v5 )
        KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
      if ( v6 <= v5[3] )
        break;
      v5 = (unsigned __int64 *)v5[1];
    }
    if ( v6 >= v5[3] )
      break;
    v5 = (unsigned __int64 *)*v5;
  }
  RtlAvlRemoveNode(&qword_140466708, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466700);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v5;
}
