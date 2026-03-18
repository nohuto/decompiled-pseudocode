/*
 * XREFs of VfDriverLock @ 0x14096043C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140326FD8 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409603A8 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409640E0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409667B8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140975E04 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140975E88 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140976E20 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140977414 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409774A0 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14098A408 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14098A510 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A3DDF8 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A3E254 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A3E41C (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
