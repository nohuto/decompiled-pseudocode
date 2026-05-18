/*
 * XREFs of sub_18011CAD0 @ 0x18011CAD0
 * Callers:
 *     sub_18011CCC8 @ 0x18011CCC8 (sub_18011CCC8.c)
 * Callees:
 *     sub_18002B74C @ 0x18002B74C (sub_18002B74C.c)
 */

_QWORD *__fastcall sub_18011CAD0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *result; // rax
  __int64 v5; // rcx

  result = sub_18002B74C(a1);
  *((_WORD *)result + 12) = 0;
  v5 = *a3;
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)v5;
  *((_OWORD *)result + 3) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  result[8] = 0LL;
  return result;
}
