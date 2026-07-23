/*
 * XREFs of MiReleaseResourceLite @ 0x1402A1A28
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
