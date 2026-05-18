/*
 * XREFs of sub_18007E8E8 @ 0x18007E8E8
 * Callers:
 *     sub_18007F1F0 @ 0x18007F1F0 (sub_18007F1F0.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18007E3C0 @ 0x18007E3C0 (sub_18007E3C0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E8E8(_QWORD *a1)
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
      sub_18007E3C0((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      unknown_libname_116(v3 + 8);
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
