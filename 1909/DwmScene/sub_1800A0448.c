/*
 * XREFs of sub_1800A0448 @ 0x1800A0448
 * Callers:
 *     sub_1800A0CF8 @ 0x1800A0CF8 (sub_1800A0CF8.c)
 * Callees:
 *     sub_18006DF5C @ 0x18006DF5C (sub_18006DF5C.c)
 */

_QWORD *__fastcall sub_1800A0448(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_18006DF5C(a1);
  *((_WORD *)result + 12) = 0;
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)a2;
  *((_OWORD *)result + 3) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
