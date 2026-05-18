/*
 * XREFs of sub_18007E3C0 @ 0x18007E3C0
 * Callers:
 *     sub_18007E3C0 @ 0x18007E3C0 (sub_18007E3C0.c)
 *     sub_18007E8E8 @ 0x18007E8E8 (sub_18007E8E8.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18007E3C0 @ 0x18007E3C0 (sub_18007E3C0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E3C0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E3C0(a1, i[2]);
    i = (__int64 *)*i;
    unknown_libname_116(v2 + 8);
    result = j_j__o_free(v2);
  }
  return result;
}
