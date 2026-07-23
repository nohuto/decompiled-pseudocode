/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x140164C28
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14004F450 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ExReleaseResourceForThreadLite @ 0x140111420 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     ExReleaseFastResource @ 0x140165010 (ExReleaseFastResource.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 CurrentIrql; // di
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v8; // r9
  ULONG_PTR v9; // r10
  unsigned __int8 v10; // r11
  void *v11; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LOBYTE(a4) = 1;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter1, 0LL, a4);
  v11 = (void *)FastOwnerEntryForThread;
  if ( !FastOwnerEntryForThread )
    KeBugCheckEx(0xE3u, BugCheckParameter1, v9, 0LL, 0LL);
  *(_BYTE *)(FastOwnerEntryForThread + 17) &= ~2u;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v8) != 0 && KeGetCurrentIrql() >= v10 && CurrentIrql < v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  ExReleaseFastResource(BugCheckParameter1, (ULONG_PTR)v11);
  ExFreePoolWithTag(v11, 0);
}
