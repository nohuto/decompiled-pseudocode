/*
 * XREFs of sub_180097A00 @ 0x180097A00
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 * Callees:
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180094CE0 @ 0x180094CE0 (sub_180094CE0.c)
 */

__int64 __fastcall sub_180097A00(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 2u;
  v6 = (_QWORD *)sub_180064400(a1);
  return sub_180094CE0((__int64 *)(a1 + 256), a2, a3, *(_DWORD *)(a1 + 124), 5, *(_DWORD *)(a1 + 304), v6);
}
