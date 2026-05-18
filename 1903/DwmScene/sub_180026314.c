/*
 * XREFs of sub_180026314 @ 0x180026314
 * Callers:
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_1800643E0 @ 0x1800643E0 (sub_1800643E0.c)
 *     sub_1800D5638 @ 0x1800D5638 (sub_1800D5638.c)
 * Callees:
 *     sub_1800259EC @ 0x1800259EC (sub_1800259EC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180026314(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // rsi
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
      sub_1800259EC((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
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
