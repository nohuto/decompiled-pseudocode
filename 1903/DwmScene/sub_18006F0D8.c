/*
 * XREFs of sub_18006F0D8 @ 0x18006F0D8
 * Callers:
 *     sub_180072D90 @ 0x180072D90 (sub_180072D90.c)
 * Callees:
 *     sub_18002B74C @ 0x18002B74C (sub_18002B74C.c)
 */

_QWORD *__fastcall sub_18006F0D8(_QWORD *a1, __int64 a2, __int64 *a3)
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
  *((_DWORD *)result + 16) = 0;
  return result;
}
