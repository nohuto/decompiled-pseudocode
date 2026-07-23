/*
 * XREFs of ViFreeToContiguousMemory @ 0x14092E788
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViFreeToContiguousMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // r8
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a3;
  v5 = *(_QWORD **)(a1 + 264);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)v3 >= 0x20 || v5[v3] != a2 )
  {
    LODWORD(v3) = 0;
    while ( *v5 != a2 )
    {
      LODWORD(v3) = v3 + 1;
      ++v5;
      if ( (unsigned int)v3 >= 0x20 )
        return 0LL;
    }
  }
  v7 = (KSPIN_LOCK *)(a1 + 280);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  RtlClearBits((PRTL_BITMAP)(a1 + 296), v3, 1u);
  KxReleaseSpinLock(v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  return 1LL;
}
