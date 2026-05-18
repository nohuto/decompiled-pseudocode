/*
 * XREFs of sub_180069C70 @ 0x180069C70
 * Callers:
 *     sub_18006A038 @ 0x18006A038 (sub_18006A038.c)
 * Callees:
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 *     sub_180069848 @ 0x180069848 (sub_180069848.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180069C70(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  v4 = v3;
  v5 = *a1;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180069848((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_180067730(v3 + 4, 0);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v5 = *a1;
  }
  *(_QWORD *)(v5 + 8) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
