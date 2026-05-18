/*
 * XREFs of sub_1800D662C @ 0x1800D662C
 * Callers:
 *     sub_1800D6710 @ 0x1800D6710 (sub_1800D6710.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_180065B7C @ 0x180065B7C (sub_180065B7C.c)
 *     sub_180069AC8 @ 0x180069AC8 (sub_180069AC8.c)
 */

__int64 __fastcall sub_1800D662C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // r9
  char v7; // [rsp+20h] [rbp-18h]

  v2 = (_QWORD *)(a2 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v4 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  if ( a1 + 136 != a2 + 136 )
  {
    sub_180069AC8(v4);
    sub_180065B7C(v4, v2, v7, v5);
  }
  return a1;
}
