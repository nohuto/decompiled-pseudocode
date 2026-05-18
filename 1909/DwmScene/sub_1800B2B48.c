/*
 * XREFs of sub_1800B2B48 @ 0x1800B2B48
 * Callers:
 *     sub_1800B2B48 @ 0x1800B2B48 (sub_1800B2B48.c)
 *     sub_1800B2CEC @ 0x1800B2CEC (sub_1800B2CEC.c)
 *     sub_18012FD0A @ 0x18012FD0A (sub_18012FD0A.c)
 * Callees:
 *     sub_1800752D0 @ 0x1800752D0 (sub_1800752D0.c)
 *     sub_1800B2B48 @ 0x1800B2B48 (sub_1800B2B48.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B2B48(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800B2B48(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800752D0(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
