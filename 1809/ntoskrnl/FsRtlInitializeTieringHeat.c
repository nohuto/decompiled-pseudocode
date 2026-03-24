/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140757F18
 * Callers:
 *     FsRtlInitSystem @ 0x1409D7714 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4F0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140437668 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
