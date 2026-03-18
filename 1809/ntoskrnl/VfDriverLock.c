/*
 * XREFs of VfDriverLock @ 0x1409216E0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140309910 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x140920ED4 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x140921650 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140927E78 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x14092827C (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140936724 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409367A8 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140937524 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409377A4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140937B30 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140937BBC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x14094A814 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14094AA20 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14094AB28 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x1409F84DC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1409F8938 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1409F8AF4 (VfXdvExcludeParseRegistryString.c)
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
