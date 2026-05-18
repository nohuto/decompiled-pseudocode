/*
 * XREFs of sub_18008D63C @ 0x18008D63C
 * Callers:
 *     sub_18008DB64 @ 0x18008DB64 (sub_18008DB64.c)
 * Callees:
 *     sub_1800893A4 @ 0x1800893A4 (sub_1800893A4.c)
 *     sub_18008D35C @ 0x18008D35C (sub_18008D35C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18008D63C(_QWORD *a1)
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
      sub_18008D35C((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_1800893A4(v3 + 4);
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
