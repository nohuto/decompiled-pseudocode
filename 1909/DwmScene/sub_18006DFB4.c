/*
 * XREFs of sub_18006DFB4 @ 0x18006DFB4
 * Callers:
 *     sub_18012FD73 @ 0x18012FD73 (sub_18012FD73.c)
 *     sub_18013472F @ 0x18013472F (sub_18013472F.c)
 *     sub_180134770 @ 0x180134770 (sub_180134770.c)
 *     sub_1801347F0 @ 0x1801347F0 (sub_1801347F0.c)
 *     sub_180134836 @ 0x180134836 (sub_180134836.c)
 *     sub_18013488B @ 0x18013488B (sub_18013488B.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 */

__int64 __fastcall sub_18006DFB4(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_116(v4);
      v4 += 4;
    }
    while ( v4 != a3 );
  }
  return result;
}
