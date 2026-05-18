/*
 * XREFs of sub_18007E2E4 @ 0x18007E2E4
 * Callers:
 *     sub_18007E2E4 @ 0x18007E2E4 (sub_18007E2E4.c)
 *     sub_18007E854 @ 0x18007E854 (sub_18007E854.c)
 * Callees:
 *     sub_180074704 @ 0x180074704 (sub_180074704.c)
 *     sub_18007E2E4 @ 0x18007E2E4 (sub_18007E2E4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E2E4(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E2E4(a1, i[2]);
    i = (__int64 *)*i;
    sub_180074704((__int64)(v2 + 4));
    result = j_j__o_free(v2);
  }
  return result;
}
