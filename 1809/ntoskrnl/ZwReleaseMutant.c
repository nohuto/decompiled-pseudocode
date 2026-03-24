/*
 * XREFs of ZwReleaseMutant @ 0x1401B8590
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140713AD0 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle, ReleaseCount, v2);
}
