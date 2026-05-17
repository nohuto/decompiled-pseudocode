/*
 * XREFs of LdrFindEntryForAddress @ 0x180034C60
 * Callers:
 *     LdrpIsReparsePoint @ 0x1800347F0 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180034A1C (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2560 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x180034CB0 (LdrpFindLoadedDllByAddress.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, __int64 *a2)
{
  int LoadedDllByAddress; // ebx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(a1, &v7, &v6);
    if ( LoadedDllByAddress >= 0 )
    {
      v4 = v7;
      *a2 = v7;
      LdrpDereferenceModule(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)LoadedDllByAddress;
}
