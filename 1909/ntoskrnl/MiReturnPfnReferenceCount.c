/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1400FF01C
 * Callers:
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteImageCreationMdls @ 0x1406B1484 (MiDeleteImageCreationMdls.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(ULONG_PTR a1)
{
  unsigned __int8 v2; // di
  unsigned int v3; // esi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = MiLockPageInline(a1);
  v3 = MiRemoveLockedPageChargeAndDecRef(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v3;
}
