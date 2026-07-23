/*
 * XREFs of ExpCheckForLookasideList @ 0x14031CE5C
 * Callers:
 *     ExpCheckForLookaside @ 0x14031CDF4 (ExpCheckForLookaside.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpCheckForLookasideList(_QWORD *a1, __int64 a2, _QWORD **a3, KSPIN_LOCK *a4)
{
  unsigned __int64 v5; // r12
  int v8; // r15d
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v5 = (unsigned __int64)a1 + a2;
  v8 = a2;
  v9 = KeAcquireSpinLockRaiseToDpc(a4);
  v10 = *a3;
  v11 = v9;
  while ( v10 != a3 )
  {
    if ( v10 - 8 >= a1 && (unsigned __int64)(v10 - 8) < v5 )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains a lookaside structure that has not been deleted first\n",
        a1,
        v8);
      __debugbreak();
    }
    v10 = (_QWORD *)*v10;
  }
  KxReleaseSpinLock(a4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v11;
  __writecr8(v11);
  return result;
}
