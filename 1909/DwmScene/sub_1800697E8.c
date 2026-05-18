/*
 * XREFs of sub_1800697E8 @ 0x1800697E8
 * Callers:
 *     sub_1800697E8 @ 0x1800697E8 (sub_1800697E8.c)
 *     sub_180069BD8 @ 0x180069BD8 (sub_180069BD8.c)
 *     sub_18012CCE9 @ 0x18012CCE9 (sub_18012CCE9.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     sub_1800697E8 @ 0x1800697E8 (sub_1800697E8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800697E8(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800697E8(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800676B8(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
