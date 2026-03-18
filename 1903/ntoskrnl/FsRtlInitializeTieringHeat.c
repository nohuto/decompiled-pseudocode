/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x14077D768
 * Callers:
 *     FsRtlInitSystem @ 0x140A1A388 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_1404632A8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
