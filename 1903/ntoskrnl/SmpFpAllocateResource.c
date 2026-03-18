/*
 * XREFs of SmpFpAllocateResource @ 0x140325BEC
 * Callers:
 *     SmpFpWaitForResource @ 0x140325D54 (SmpFpWaitForResource.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SmpFpAllocateResource(PEX_SPIN_LOCK SpinLock, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // si
  __int64 i; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2;
  v4 = ExAcquireSpinLockExclusive(SpinLock);
  v5 = *(__int64 **)&SpinLock[2 * v2 + 8];
  v6 = v4;
  for ( i = v2; (v5[1] & 1) != 0; v5 = (__int64 *)*v5 )
    ;
  v8 = v5[1];
  *((_DWORD *)v5 + 2) |= 1u;
  ++*((_BYTE *)SpinLock + i + 80);
  ++*((_BYTE *)SpinLock + 86);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  return v8;
}
