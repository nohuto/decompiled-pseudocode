/*
 * XREFs of SmpFpAllocateResource @ 0x140308384
 * Callers:
 *     SmpFpWaitForResource @ 0x1403084F8 (SmpFpWaitForResource.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SmpFpAllocateResource(PEX_SPIN_LOCK SpinLock, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // si
  __int64 i; // r9
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2;
  v4 = ExAcquireSpinLockExclusive(SpinLock);
  v5 = *(__int64 **)&SpinLock[2 * v2 + 8];
  v6 = v4;
  for ( i = v2; (v5[1] & 1) != 0; v5 = (__int64 *)*v5 )
    ;
  v8 = v5[1];
  *((_DWORD *)v5 + 2) = v8 | 1;
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
