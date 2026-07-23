/*
 * XREFs of MiApplyHotPatchToDriver @ 0x140855584
 * Callers:
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x140859458 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToDriver(int a1, __int64 a2, __int64 a3)
{
  PVOID *v3; // r10
  unsigned int v6; // r11d
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // r10

  v3 = (PVOID *)PsLoadedModuleList;
  v6 = -1073741515;
  while ( v3 != &PsLoadedModuleList )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v3[6]) != 1
      && *(_DWORD *)(v9 + 120) == a1
      && *(_DWORD *)(v9 + 156) == v7
      && (*(_DWORD *)(v9 + 196) & 0x21) == 0 )
    {
      if ( a3 )
      {
        if ( !v8 )
          return 0LL;
        return (unsigned int)MiApplyHotPatchToLoadedDriver(v9, a3, v8);
      }
      else
      {
        return (unsigned int)MiUnapplyDriverHotPatch(v9);
      }
    }
    v3 = *(PVOID **)v9;
  }
  return v6;
}
