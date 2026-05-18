/*
 * XREFs of sub_18002B910 @ 0x18002B910
 * Callers:
 *     sub_18002B910 @ 0x18002B910 (sub_18002B910.c)
 *     sub_18002BB8C @ 0x18002BB8C (sub_18002BB8C.c)
 * Callees:
 *     sub_18002B910 @ 0x18002B910 (sub_18002B910.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002B910(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18002B910(a1, i[2]);
    i = (__int64 *)*i;
    result = j_j__o_free(v2);
  }
  return result;
}
