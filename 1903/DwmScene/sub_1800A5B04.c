/*
 * XREFs of sub_1800A5B04 @ 0x1800A5B04
 * Callers:
 *     sub_1800A5B04 @ 0x1800A5B04 (sub_1800A5B04.c)
 *     sub_1800A5C38 @ 0x1800A5C38 (sub_1800A5C38.c)
 * Callees:
 *     sub_1800A29F4 @ 0x1800A29F4 (sub_1800A29F4.c)
 *     sub_1800A5B04 @ 0x1800A5B04 (sub_1800A5B04.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A5B04(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800A5B04(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800A29F4(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
