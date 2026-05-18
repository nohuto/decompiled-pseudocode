/*
 * XREFs of sub_1800A5CCC @ 0x1800A5CCC
 * Callers:
 *     sub_1800A5CCC @ 0x1800A5CCC (sub_1800A5CCC.c)
 *     sub_1800A5E70 @ 0x1800A5E70 (sub_1800A5E70.c)
 *     sub_18012FA86 @ 0x18012FA86 (sub_18012FA86.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     sub_1800A5CCC @ 0x1800A5CCC (sub_1800A5CCC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A5CCC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800A5CCC(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800676B8(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
