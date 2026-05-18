/*
 * XREFs of sub_1800B7BF0 @ 0x1800B7BF0
 * Callers:
 *     sub_1800B7B48 @ 0x1800B7B48 (sub_1800B7B48.c)
 * Callees:
 *     sub_1800B8BC0 @ 0x1800B8BC0 (sub_1800B8BC0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B7BF0(_QWORD *a1, _QWORD *a2, char a3)
{
  int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8

  std::streambuf::streambuf(a1);
  *a1 = &std::stringbuf::`vftable';
  v6 = (4 * ((a3 & 1) == 0)) | 2;
  if ( (a3 & 2) != 0 )
    v6 = 4 * ((a3 & 1) == 0);
  v7 = v6 | 8;
  if ( (a3 & 8) == 0 )
    v7 = v6;
  v8 = v7 | 0x10;
  if ( (a3 & 4) == 0 )
    v8 = v7;
  v9 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_1800B8BC0(a1, a2, v9, v8, -2LL);
  return a1;
}
