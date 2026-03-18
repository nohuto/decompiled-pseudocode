/*
 * XREFs of ExpFastResourceLegacyConvertExclusiveToShared @ 0x14016BB1C
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1400EECC0 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExpConvertFastResourceExclusiveToShared @ 0x14016BBD4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14016C590 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpFastResourceLegacyConvertExclusiveToShared(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 FastOwnerEntryForThread; // rdi
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // r10
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LOBYTE(a4) = 1;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, a4);
  if ( !FastOwnerEntryForThread )
    KeBugCheckEx(0xE3u, BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v8) != 0 && KeGetCurrentIrql() >= v9 && CurrentIrql < v9 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( !*(_BYTE *)(FastOwnerEntryForThread + 18)
    || *(_QWORD *)(FastOwnerEntryForThread + 40) != FastOwnerEntryForThread + 40 )
  {
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( *(char *)(BugCheckParameter2 + 26) >= 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL);
  return ExpConvertFastResourceExclusiveToShared(BugCheckParameter2, FastOwnerEntryForThread);
}
