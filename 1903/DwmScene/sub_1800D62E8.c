/*
 * XREFs of sub_1800D62E8 @ 0x1800D62E8
 * Callers:
 *     sub_1800D4D90 @ 0x1800D4D90 (sub_1800D4D90.c)
 *     sub_1800D5AD4 @ 0x1800D5AD4 (sub_1800D5AD4.c)
 *     sub_1800D5C30 @ 0x1800D5C30 (sub_1800D5C30.c)
 * Callees:
 *     sub_1800D5F08 @ 0x1800D5F08 (sub_1800D5F08.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800D62E8(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v5) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    sub_1800D5F08(a1, 1uLL);
    v5 = a1[3];
  }
  v6 = v5 & (2LL * a1[2] - 1);
  a1[3] = v6;
  v7 = v6 + a1[4];
  v8 = a1[1];
  v9 = (v7 >> 1) & (a1[2] - 1LL);
  if ( !*(_QWORD *)(v8 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = operator new(0x10uLL);
    v8 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9) + 8 * (v7 & 1)) = *a2;
  ++a1[4];
  return result;
}
