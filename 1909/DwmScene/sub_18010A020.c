/*
 * XREFs of sub_18010A020 @ 0x18010A020
 * Callers:
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1801094DC @ 0x1801094DC (sub_1801094DC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010A020(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  double v7; // xmm0_8
  __int64 v8; // rax
  double v9; // xmm0_8

  v5 = a1 + 8;
  sub_1800636EC(a1 + 8);
  sub_1801094DC(a1);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 208);
  v7 = (double)(int)v6;
  if ( v6 < 0 )
    v7 = v7 + 1.844674407370955e19;
  *(double *)(a2 + 8) = v7 / a3 * 1000.0;
  v8 = *(_QWORD *)(a1 + 392);
  v9 = (double)(int)v8;
  if ( v8 < 0 )
    v9 = v9 + 1.844674407370955e19;
  *(double *)(a2 + 16) = v9 / a3 * 1000.0;
  sub_180063778(v5);
  return a2;
}
