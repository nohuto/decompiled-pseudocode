/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1401543E8
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x14070ECE4 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x14070F974 (MiIsImageFullyRetpolined.c)
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409EFCFC (MiImportOptimizationVetosDriverRelocation.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A3C790 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C (LdrImageDirectoryEntryToLoadConfig.c)
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
