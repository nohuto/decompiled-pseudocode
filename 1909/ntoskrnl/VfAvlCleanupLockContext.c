/*
 * XREFs of VfAvlCleanupLockContext @ 0x140154CBC
 * Callers:
 *     VfTargetDriversAdd @ 0x140154BD8 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14017ED50 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x1403284DC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1409735E8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140973660 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409738E4 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140973968 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140973AD0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140973D18 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140973E10 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140973EBC (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140973F10 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409740DC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409741CC (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x14097442C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140974560 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140974824 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x14097495C (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140974A24 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140976E20 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x14097E808 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14097E8A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14097E9CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14097F100 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14097F4E0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14097F76C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140985790 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140154DA8 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
