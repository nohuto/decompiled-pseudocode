/*
 * XREFs of sub_18002627C @ 0x18002627C
 * Callers:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_18009D5AC @ 0x18009D5AC (sub_18009D5AC.c)
 *     sub_18009F03C @ 0x18009F03C (sub_18009F03C.c)
 *     sub_1800A9604 @ 0x1800A9604 (sub_1800A9604.c)
 *     sub_1800B13B0 @ 0x1800B13B0 (sub_1800B13B0.c)
 *     sub_1800D27B0 @ 0x1800D27B0 (sub_1800D27B0.c)
 *     sub_1800D2A30 @ 0x1800D2A30 (sub_1800D2A30.c)
 *     sub_1800F8558 @ 0x1800F8558 (sub_1800F8558.c)
 * Callees:
 *     sub_180021718 @ 0x180021718 (sub_180021718.c)
 *     sub_18002598C @ 0x18002598C (sub_18002598C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002627C(_QWORD *a1)
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
      sub_18002598C((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_180021718((__int64)(v3 + 4), 0);
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
