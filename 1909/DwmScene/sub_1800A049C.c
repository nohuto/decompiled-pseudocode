/*
 * XREFs of sub_1800A049C @ 0x1800A049C
 * Callers:
 *     sub_1800A3820 @ 0x1800A3820 (sub_1800A3820.c)
 * Callees:
 *     sub_180025694 @ 0x180025694 (sub_180025694.c)
 */

_QWORD *__fastcall sub_1800A049C(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = sub_180025694(a1);
  *((_WORD *)result + 12) = 0;
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)a2;
  *((_OWORD *)result + 3) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  result[8] = 0LL;
  result[9] = 0LL;
  result[8] = *(_QWORD *)a3;
  result[9] = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *((_DWORD *)result + 20) = *(_DWORD *)(a3 + 16);
  result[11] = 0LL;
  result[12] = 0LL;
  result[11] = *(_QWORD *)(a3 + 24);
  result[12] = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  return result;
}
