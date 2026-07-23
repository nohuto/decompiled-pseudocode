/*
 * XREFs of MiApplyImportOptimizationToBootDrivers @ 0x1409F7F40
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     VslUpdateImportRelocationsOnImage @ 0x1401B3DDC (VslUpdateImportRelocationsOnImage.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 */

__int64 MiApplyImportOptimizationToBootDrivers()
{
  bool IsRetpolineEnabled; // al
  __int64 v1; // rcx
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  unsigned int (*v4)(void); // r14
  char *v5; // rdi
  bool v6; // al
  __int64 v7; // rcx
  int updated; // eax

  if ( MiIsImportOptimizationEnabled() )
  {
    IsRetpolineEnabled = MiIsRetpolineEnabled();
    v2 = (__int64 *)(v1 + 16);
    v3 = *(__int64 **)(v1 + 16);
    v4 = (unsigned int (*)(void))((unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)IsRetpolineEnabled);
    while ( v3 != v2 )
    {
      v5 = (char *)v3[6];
      if ( v5 != PsNtosImageBase && v5 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
      {
        MiIsRetpolineEnabled();
        if ( (MiFlags & 0x10000) != 0 )
        {
          updated = VslUpdateImportRelocationsOnImage((__int64)v5);
        }
        else
        {
          v6 = MiIsRetpolineEnabled();
          updated = RtlUpdateImportRelocationsInImage(
                      v5,
                      (__int64)v5,
                      *((_DWORD *)v3 + 16),
                      v4,
                      v7,
                      (__int64)qword_140439F10,
                      0,
                      !v6);
        }
        if ( updated < 0 )
          MiIsRetpolineEnabled();
      }
      v3 = (__int64 *)*v3;
    }
  }
  return 0LL;
}
