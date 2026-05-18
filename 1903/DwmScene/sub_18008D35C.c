/*
 * XREFs of sub_18008D35C @ 0x18008D35C
 * Callers:
 *     sub_18008D35C @ 0x18008D35C (sub_18008D35C.c)
 *     sub_18008D63C @ 0x18008D63C (sub_18008D63C.c)
 * Callees:
 *     sub_1800893A4 @ 0x1800893A4 (sub_1800893A4.c)
 *     sub_18008D35C @ 0x18008D35C (sub_18008D35C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18008D35C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18008D35C(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800893A4(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
