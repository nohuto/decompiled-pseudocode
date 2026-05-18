/*
 * XREFs of sub_18011CBE0 @ 0x18011CBE0
 * Callers:
 *     sub_18011CDD8 @ 0x18011CDD8 (sub_18011CDD8.c)
 * Callees:
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 */

_QWORD *__fastcall sub_18011CBE0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *result; // rax
  __int64 v5; // rcx

  result = sub_18002B85C(a1);
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
