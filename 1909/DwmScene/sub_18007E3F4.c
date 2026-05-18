/*
 * XREFs of sub_18007E3F4 @ 0x18007E3F4
 * Callers:
 *     sub_18007E3F4 @ 0x18007E3F4 (sub_18007E3F4.c)
 *     sub_18007E964 @ 0x18007E964 (sub_18007E964.c)
 * Callees:
 *     sub_180074814 @ 0x180074814 (sub_180074814.c)
 *     sub_18007E3F4 @ 0x18007E3F4 (sub_18007E3F4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E3F4(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E3F4(a1, i[2]);
    i = (__int64 *)*i;
    sub_180074814((__int64)(v2 + 4));
    result = j_j__o_free(v2);
  }
  return result;
}
