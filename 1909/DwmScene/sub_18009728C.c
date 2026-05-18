/*
 * XREFs of sub_18009728C @ 0x18009728C
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_1800971B8 @ 0x1800971B8 (sub_1800971B8.c)
 * Callees:
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180094E90 @ 0x180094E90 (sub_180094E90.c)
 */

__int64 __fastcall sub_18009728C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v8 = (_QWORD *)sub_180064400(a1);
  sub_180094E90((__int64 *)(a1 + 208), a2, a4, *(_DWORD *)(a1 + 124), 6, *(_DWORD *)(a1 + 304), v8);
  v9 = (_QWORD *)sub_180064400(a1);
  return sub_180094E90((__int64 *)(a1 + 224), a3, a4, *(_DWORD *)(a1 + 124), 7, *(_DWORD *)(a1 + 304), v9);
}
