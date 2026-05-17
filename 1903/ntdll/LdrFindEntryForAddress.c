/*
 * XREFs of LdrFindEntryForAddress @ 0x180054D40
 * Callers:
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180054D90 @ 0x180054D90 (sub_180054D90.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    v3 = sub_180054D90(a1, &v7, &v6);
    if ( v3 >= 0 )
    {
      v4 = v7;
      *a2 = v7;
      sub_18001B678(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)v3;
}
