/*
 * XREFs of sub_180025A9C @ 0x180025A9C
 * Callers:
 *     sub_180025A9C @ 0x180025A9C (sub_180025A9C.c)
 *     sub_18002638C @ 0x18002638C (sub_18002638C.c)
 * Callees:
 *     sub_180021828 @ 0x180021828 (sub_180021828.c)
 *     sub_180025A9C @ 0x180025A9C (sub_180025A9C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180025A9C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_180025A9C(a1, i[2]);
    i = (__int64 *)*i;
    sub_180021828((__int64)(v2 + 4), 0);
    result = j_j__o_free(v2);
  }
  return result;
}
