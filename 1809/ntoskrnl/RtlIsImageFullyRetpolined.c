/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1401B5FB8
 * Callers:
 *     MiIsImageFullyRetpolined @ 0x140582274 (MiIsImageFullyRetpolined.c)
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409AAEA0 (MiImportOptimizationVetosDriverRelocation.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x1409AAF30 (MiIsBootImageTargetFullyRetpolined.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B88C4 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140682014 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(void *a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}
