/*
 * XREFs of MiApplyHotPatchToDriver @ 0x14088CFCC
 * Callers:
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A3C60C (MmRegisterHotPatch.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 *     MiLogHotPatchOperationStatus @ 0x14088F418 (MiLogHotPatchOperationStatus.c)
 *     MiUnapplyDriverHotPatch @ 0x140891598 (MiUnapplyDriverHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToDriver(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v3; // rdi
  PVOID *v4; // r11
  unsigned int v6; // ebx
  int v7; // r8d
  __int64 v8; // r9
  int v9; // r10d
  unsigned int v10; // eax

  v3 = (PVOID *)PsLoadedModuleList;
  v4 = &PsLoadedModuleList;
  v6 = -1073741515;
  while ( v3 != v4 )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v3[6]) != 1
      && *((_DWORD *)v3 + 30) == v9
      && *((_DWORD *)v3 + 39) == v7
      && (*((_DWORD *)v3 + 49) & 0x21) == 0 )
    {
      v6 = 0;
      if ( a3 )
      {
        if ( !v8 )
          return v6;
        v10 = MiApplyHotPatchToLoadedDriver(v3, a3, v8);
      }
      else
      {
        if ( !v3[35] )
          return v6;
        v10 = MiUnapplyDriverHotPatch(v3);
      }
      v6 = v10;
      MiLogHotPatchOperationStatus(*((_DWORD *)v3 + 30), *((_DWORD *)v3 + 39), a3, v10, 1);
      return v6;
    }
    v3 = (PVOID *)*v3;
  }
  return v6;
}
