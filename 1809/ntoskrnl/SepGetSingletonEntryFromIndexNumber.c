/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x1400D9C50
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInitSingletonEntry @ 0x1400D99D8 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D9A40 (SepCleanupMarkedForDeletionEntries.c)
 *     SepSetSingletonEntry @ 0x140300810 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300928 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
