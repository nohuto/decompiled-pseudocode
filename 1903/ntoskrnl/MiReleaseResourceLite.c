/*
 * XREFs of MiReleaseResourceLite @ 0x140147860
 * Callers:
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
