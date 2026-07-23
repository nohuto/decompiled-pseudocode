/*
 * XREFs of VfDriverLock @ 0x1409226E0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140309C00 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x140921ED4 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x140922650 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140928E78 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x14092927C (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140937724 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409377A8 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140938524 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140938B30 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140938BBC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14094BA20 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14094BB28 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x1409F94EC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1409F9948 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1409F9B04 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
