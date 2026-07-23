/*
 * XREFs of ZwReleaseMutant @ 0x1401C04D0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x14073DE94 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
