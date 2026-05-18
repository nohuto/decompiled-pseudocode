/*
 * XREFs of sub_180025AFC @ 0x180025AFC
 * Callers:
 *     sub_180025AFC @ 0x180025AFC (sub_180025AFC.c)
 *     sub_180026424 @ 0x180026424 (sub_180026424.c)
 * Callees:
 *     sub_180025AFC @ 0x180025AFC (sub_180025AFC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180025AFC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_180025AFC(a1, i[2]);
    i = (__int64 *)*i;
    result = j_j__o_free(v2);
  }
  return result;
}
