/*
 * XREFs of MiRemoveMappingNode @ 0x14015F9A4
 * Callers:
 *     MmFreeMappingAddress @ 0x1406FD750 (MmFreeMappingAddress.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

unsigned __int64 *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rbp
  KIRQL v4; // al
  unsigned __int64 *v5; // rbx
  ULONG_PTR v6; // r8
  KIRQL v7; // di
  ULONG_PTR v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_14043BD40);
  v5 = (unsigned __int64 *)qword_14043BD48;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v5 )
        KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
      v8 = v5[3];
      if ( v6 <= v8 )
        break;
      v5 = (unsigned __int64 *)v5[1];
    }
    if ( v6 >= v8 )
      break;
    v5 = (unsigned __int64 *)*v5;
  }
  RtlAvlRemoveNode(&qword_14043BD48, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BD40);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v5;
}
