/*
 * XREFs of sub_18012310C @ 0x18012310C
 * Callers:
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 *     sub_180123260 @ 0x180123260 (sub_180123260.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18012310C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rsi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18012310C(a1, i[2]);
    i = (__int64 *)*i;
    sub_180124524(v2 + 8);
    unknown_libname_116(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
