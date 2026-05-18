/*
 * XREFs of sub_180132C4A @ 0x180132C4A
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall sub_180132C4A(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 84) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 84) &= ~1u;
    unknown_libname_110(*(_QWORD **)(a2 + 120));
  }
}
