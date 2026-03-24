/*
 * XREFs of VfAvlInitializeLockContext @ 0x14030B5B4
 * Callers:
 *     VfDevObjIsDeviceRemoved @ 0x140933FC8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140934034 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140934340 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409343B8 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140934520 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140934768 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140934854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409348F8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140934944 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140934B08 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140934BF4 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140934E3C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140934F64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14093507C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140935218 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140935348 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140935404 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140937524 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x14093EF78 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14093F00C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14093F12C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14093F860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14093FECC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140945DC0 (VerifierIoWMIRegistrationControl.c)
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
