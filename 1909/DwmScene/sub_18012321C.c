/*
 * XREFs of sub_18012321C @ 0x18012321C
 * Callers:
 *     sub_18012321C @ 0x18012321C (sub_18012321C.c)
 *     sub_180123370 @ 0x180123370 (sub_180123370.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_18012321C @ 0x18012321C (sub_18012321C.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18012321C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rsi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18012321C(a1, i[2]);
    i = (__int64 *)*i;
    sub_180124634(v2 + 8);
    unknown_libname_116(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
