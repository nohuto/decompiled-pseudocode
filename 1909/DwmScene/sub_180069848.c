/*
 * XREFs of sub_180069848 @ 0x180069848
 * Callers:
 *     sub_180069848 @ 0x180069848 (sub_180069848.c)
 *     sub_180069C70 @ 0x180069C70 (sub_180069C70.c)
 * Callees:
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 *     sub_180069848 @ 0x180069848 (sub_180069848.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180069848(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_180069848(a1, i[2]);
    i = (__int64 *)*i;
    sub_180067730(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
