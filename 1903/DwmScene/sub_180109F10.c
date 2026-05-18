/*
 * XREFs of sub_180109F10 @ 0x180109F10
 * Callers:
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1801093CC @ 0x1801093CC (sub_1801093CC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180109F10(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  double v7; // xmm0_8
  __int64 v8; // rax
  double v9; // xmm0_8

  v5 = a1 + 8;
  sub_1800635DC(a1 + 8);
  sub_1801093CC(a1);
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
  sub_180063668(v5);
  return a2;
}
