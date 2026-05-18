/*
 * XREFs of unknown_libname_130 @ 0x180127F48
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

// Microsoft VisualC v14 64bit runtime
void __fastcall unknown_libname_130(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    unknown_libname_110((_QWORD *)(a2 + 104));
  }
}
