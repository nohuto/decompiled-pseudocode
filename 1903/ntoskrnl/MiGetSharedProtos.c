/*
 * XREFs of MiGetSharedProtos @ 0x14015C5CC
 * Callers:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x1400A8AAC (MiComputeImagePteIndex.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiGetImageProtoProtection @ 0x140122350 (MiGetImageProtoProtection.c)
 *     MiFaultGetFileExtents @ 0x1402D2608 (MiFaultGetFileExtents.c)
 *     MiMakePerSessionProtoPte @ 0x1402E4DD4 (MiMakePerSessionProtoPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14066DD10 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x14066E540 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x14015C634 (MiGetSharedProtosAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedProtosAtDpcLevel; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return SharedProtosAtDpcLevel;
}
