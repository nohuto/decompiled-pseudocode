/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140780188
 * Callers:
 *     FsRtlInitSystem @ 0x140A1A600 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140462F88 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
