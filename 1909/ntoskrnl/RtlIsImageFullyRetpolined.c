/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x140154A88
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140710AC4 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140711754 (MiIsImageFullyRetpolined.c)
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409EFC14 (MiImportOptimizationVetosDriverRelocation.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0AC8 (MiApplyRetpolineToBootDrivers.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A3C560 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140710B3C (LdrImageDirectoryEntryToLoadConfig.c)
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
