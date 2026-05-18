/*
 * XREFs of sub_180091350 @ 0x180091350
 * Callers:
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 *     sub_1800A589C @ 0x1800A589C (sub_1800A589C.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_180110120 @ 0x180110120 (sub_180110120.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180091350(__int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = a2[3];
  if ( v5 >= 0x10 )
  {
    v6 = *a2;
    v7 = v5 + 1;
    if ( v7 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v7 + 39;
      v10 = v6 - v8;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v9);
        JUMPOUT(0x1800913FFLL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a2[2] = 0LL;
  result = a1;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
