/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1402F5F20
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402F5870 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402F5A90 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1402F5B60 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1402F5BF0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1402F5C10 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  unsigned __int8 v1; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
    v1 = *(_BYTE *)(a1 + 40);
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 56));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v1);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 56));
  }
  return 1;
}
