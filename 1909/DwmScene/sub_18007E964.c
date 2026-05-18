/*
 * XREFs of sub_18007E964 @ 0x18007E964
 * Callers:
 *     sub_18007EF90 @ 0x18007EF90 (sub_18007EF90.c)
 * Callees:
 *     sub_180074814 @ 0x180074814 (sub_180074814.c)
 *     sub_18007E3F4 @ 0x18007E3F4 (sub_18007E3F4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E964(_QWORD *a1)
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
      sub_18007E3F4((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_180074814((__int64)(v3 + 4));
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
