/*
 * XREFs of sub_18002B9F4 @ 0x18002B9F4
 * Callers:
 *     sub_18002BC94 @ 0x18002BC94 (sub_18002BC94.c)
 *     sub_1800E2694 @ 0x1800E2694 (sub_1800E2694.c)
 * Callees:
 *     sub_18002B7AC @ 0x18002B7AC (sub_18002B7AC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002B9F4(_QWORD *a1)
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
      sub_18002B7AC((__int64)a1, (__int64 *)v4[2]);
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
