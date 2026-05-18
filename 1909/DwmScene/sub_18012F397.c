/*
 * XREFs of sub_18012F397 @ 0x18012F397
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall sub_18012F397(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    unknown_libname_110((_QWORD *)(a2 + 104));
  }
}
