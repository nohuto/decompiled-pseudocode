/*
 * XREFs of sub_1800A9FA8 @ 0x1800A9FA8
 * Callers:
 *     sub_1800A9FA8 @ 0x1800A9FA8 (sub_1800A9FA8.c)
 *     sub_1800AA154 @ 0x1800AA154 (sub_1800AA154.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180074638 @ 0x180074638 (sub_180074638.c)
 *     sub_1800A9FA8 @ 0x1800A9FA8 (sub_1800A9FA8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A9FA8(__int64 a1, __int64 ***a2)
{
  __int64 ***v2; // rsi
  __int64 **v4; // r14
  __int64 result; // rax
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v4 = (__int64 **)a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      sub_1800A9FA8(a1, v4[2]);
      v4 = (__int64 **)*v4;
      sub_180026530(v2 + 7, &v6, *v2[7], (__int64 *)v2[7]);
      j_j__o_free(v2[7]);
      sub_180074638((__int64)(v2 + 5));
      result = j_j__o_free(v2);
      v2 = (__int64 ***)v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return result;
}
