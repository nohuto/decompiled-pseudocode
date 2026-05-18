/*
 * XREFs of sub_1800B2BDC @ 0x1800B2BDC
 * Callers:
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 *     sub_1800B2C74 @ 0x1800B2C74 (sub_1800B2C74.c)
 * Callees:
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 *     sub_1800B2A38 @ 0x1800B2A38 (sub_1800B2A38.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B2BDC(_QWORD *a1)
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
      sub_1800B2A38((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_1800751C0(v3 + 4, 0);
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
