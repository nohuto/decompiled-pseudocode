/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140759108
 * Callers:
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140438728 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
