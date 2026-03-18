/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1400FCE8C
 * Callers:
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiDeleteImageCreationMdls @ 0x1406AF554 (MiDeleteImageCreationMdls.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E5C84 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(ULONG_PTR a1)
{
  unsigned __int8 v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // esi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = MiLockPageInline(a1);
  v6 = MiRemoveLockedPageChargeAndDecRef(a1, v3, v4, v5);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v6;
}
