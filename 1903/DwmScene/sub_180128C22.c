/*
 * XREFs of sub_180128C22 @ 0x180128C22
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall sub_180128C22(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    unknown_libname_110(*(_QWORD **)(a2 + 136));
  }
}
