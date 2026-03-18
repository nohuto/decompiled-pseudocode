/*
 * XREFs of ExpCheckForResource @ 0x14033A5C4
 * Callers:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x1400F5C08 (ExpFreePoolChecks.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     VfCheckForResource @ 0x14097F76C (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, ULONG_PTR a2)
{
  KIRQL v4; // al
  __int64 *v5; // rbx
  KIRQL v6; // di
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (MmVerifierData & 0x800) != 0 && (unsigned int)VfCheckForResource((ULONG_PTR)a1, a2)
    || (unsigned int)KeNumberProcessors_0 > 1
    || (ExResourceCheckFlags & 1) == 0 )
  {
    return 0LL;
  }
  v4 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
  v5 = (__int64 *)ExpSystemResourcesList;
  v6 = v4;
  while ( v5 != &ExpSystemResourcesList )
  {
    if ( v5 >= a1 && v5 < (__int64 *)((char *)a1 + a2) )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
        a1,
        a2);
      __debugbreak();
    }
    v5 = (__int64 *)*v5;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpResourceSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  return 0LL;
}
