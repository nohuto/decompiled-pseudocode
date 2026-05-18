/*
 * XREFs of sub_1800A5B60 @ 0x1800A5B60
 * Callers:
 *     sub_1800A5B60 @ 0x1800A5B60 (sub_1800A5B60.c)
 *     sub_1800A5CCC @ 0x1800A5CCC (sub_1800A5CCC.c)
 * Callees:
 *     sub_1800A2A5C @ 0x1800A2A5C (sub_1800A2A5C.c)
 *     sub_1800A5B60 @ 0x1800A5B60 (sub_1800A5B60.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A5B60(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800A5B60(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800A2A5C(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
