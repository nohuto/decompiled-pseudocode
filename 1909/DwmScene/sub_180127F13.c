/*
 * XREFs of sub_180127F13 @ 0x180127F13
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall sub_180127F13(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    unknown_libname_110((_QWORD *)(a2 + 80));
  }
}
