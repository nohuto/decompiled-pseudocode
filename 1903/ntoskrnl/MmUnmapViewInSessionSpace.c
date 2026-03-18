/*
 * XREFs of MmUnmapViewInSessionSpace @ 0x1406EC330
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSystemSpace(MappedBase);
}
