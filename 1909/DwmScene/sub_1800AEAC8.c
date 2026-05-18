/*
 * XREFs of sub_1800AEAC8 @ 0x1800AEAC8
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 * Callees:
 *     sub_1800AEA88 @ 0x1800AEA88 (sub_1800AEA88.c)
 */

_OWORD *__fastcall sub_1800AEAC8(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax

  v3 = (_OWORD *)sub_1800AEA88(a1, 0, 2);
  v4 = v3[1];
  *a2 = *v3;
  v5 = v3[2];
  a2[1] = v4;
  v6 = v3[3];
  result = a2;
  a2[2] = v5;
  a2[3] = v6;
  return result;
}
