/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x14008573C
 * Callers:
 *     SepInitSingletonEntry @ 0x1400856D4 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140085C40 (SepCleanupMarkedForDeletionEntries.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140092040 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14031E894 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14031E9AC (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbp
  KIRQL v4; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1 & 0x3F;
  v2 = a1 >> 6;
  v3 = 0LL;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( (unsigned int)v2 < *((_DWORD *)SepSingletonGlobal + 1) )
    v3 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8 * v2) + 24 * v1;
  ExReleaseSpinLockSharedFromDpcLevel(SepSingletonGlobal);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return v3;
}
