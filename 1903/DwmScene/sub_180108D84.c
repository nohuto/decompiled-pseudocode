/*
 * XREFs of sub_180108D84 @ 0x180108D84
 * Callers:
 *     sub_180108E50 @ 0x180108E50 (sub_180108E50.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_180069AC8 @ 0x180069AC8 (sub_180069AC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180108D84(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  v3 = (__int64 *)(a1 + 136);
  v4 = (__int64 *)(a2 + 136);
  if ( a1 + 136 != a2 + 136 )
  {
    sub_180069AC8((_QWORD *)(a1 + 136));
    v5 = *v3;
    *v3 = *v4;
    *v4 = v5;
    v6 = v3[1];
    v3[1] = v4[1];
    v4[1] = v6;
  }
  return a1;
}
