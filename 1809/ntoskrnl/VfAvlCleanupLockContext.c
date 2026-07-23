/*
 * XREFs of VfAvlCleanupLockContext @ 0x1400F5708
 * Callers:
 *     VfTargetDriversAdd @ 0x1400F5624 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14016C2E0 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14030AF8C (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x140934FC8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140935034 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140935340 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409353B8 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140935520 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140935768 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140935854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409358F8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140935944 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140935B08 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140935BF4 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140935F64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140936218 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140936348 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140936404 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140938524 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x14093FF78 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14094000C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14094012C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140940860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140940C40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x140940ECC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140946DC0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F57F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  unsigned __int8 result; // al
  unsigned __int8 v3; // di
  struct _KPRCB *CurrentPrcb; // rcx

  result = *(_BYTE *)(a1 + 9);
  if ( (result & 2) != 0 )
  {
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
    result = *(_BYTE *)(a1 + 9);
  }
  if ( (result & 1) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v3;
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
