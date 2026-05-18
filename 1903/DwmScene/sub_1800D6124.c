/*
 * XREFs of sub_1800D6124 @ 0x1800D6124
 * Callers:
 *     sub_1800D61B8 @ 0x1800D61B8 (sub_1800D61B8.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_1800D4F78 @ 0x1800D4F78 (sub_1800D4F78.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D6124(_QWORD *a1)
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
      sub_1800D5EAC((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_1800D4F78(v3 + 4);
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
