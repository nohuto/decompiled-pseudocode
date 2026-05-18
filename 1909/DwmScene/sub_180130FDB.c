/*
 * XREFs of sub_180130FDB @ 0x180130FDB
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall sub_180130FDB(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    unknown_libname_110(*(_QWORD **)(a2 + 248));
  }
}
