/*
 * XREFs of sub_1800D673C @ 0x1800D673C
 * Callers:
 *     sub_1800D6820 @ 0x1800D6820 (sub_1800D6820.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     sub_180065C8C @ 0x180065C8C (sub_180065C8C.c)
 *     sub_180069BD8 @ 0x180069BD8 (sub_180069BD8.c)
 */

__int64 __fastcall sub_1800D673C(__int64 a1, __int64 a2)
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
    sub_180069BD8(v4);
    sub_180065C8C(v4, v2, v7, v5);
  }
  return a1;
}
