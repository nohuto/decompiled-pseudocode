/*
 * XREFs of VfAvlInitializeLockContext @ 0x14030B7A4
 * Callers:
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
 *     <none>
 */

__int64 __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
  return result;
}
