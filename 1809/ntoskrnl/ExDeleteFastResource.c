/*
 * XREFs of ExDeleteFastResource @ 0x140168C90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource(__int64 *BugCheckParameter2)
{
  __int16 v2; // cx
  unsigned __int8 CurrentIrql; // al
  KIRQL v4; // al
  __int64 **v5; // rdx
  KIRQL v6; // di
  __int64 *v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *((_WORD *)BugCheckParameter2 + 13);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *((_DWORD *)BugCheckParameter2 + 16) )
    KeBugCheckEx(0x1C6u, 4uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  *((_WORD *)BugCheckParameter2 + 13) = v2 & 0xFFBE;
  v4 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v5 = (__int64 **)BugCheckParameter2[1];
  v6 = v4;
  v7 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v5 != BugCheckParameter2 )
    __fastfail(3u);
  *v5 = v7;
  v7[1] = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  *BugCheckParameter2 = 0LL;
  BugCheckParameter2[1] = 0LL;
  return result;
}
