/*
 * XREFs of sub_18002B8BC @ 0x18002B8BC
 * Callers:
 *     sub_18002B8BC @ 0x18002B8BC (sub_18002B8BC.c)
 *     sub_18002BB04 @ 0x18002BB04 (sub_18002BB04.c)
 * Callees:
 *     sub_18002B8BC @ 0x18002B8BC (sub_18002B8BC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002B8BC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18002B8BC(a1, i[2]);
    i = (__int64 *)*i;
    result = j_j__o_free(v2);
  }
  return result;
}
