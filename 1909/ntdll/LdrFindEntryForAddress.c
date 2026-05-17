/*
 * XREFs of LdrFindEntryForAddress @ 0x180054DE0
 * Callers:
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180054B9C (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0D30 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x180054E30 (LdrpFindLoadedDllByAddress.c)
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
