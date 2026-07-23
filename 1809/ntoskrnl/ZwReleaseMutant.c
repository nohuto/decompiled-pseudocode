/*
 * XREFs of ZwReleaseMutant @ 0x1401B86F0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140714D70 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
