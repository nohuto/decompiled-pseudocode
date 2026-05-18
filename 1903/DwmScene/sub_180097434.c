/*
 * XREFs of sub_180097434 @ 0x180097434
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180097364 @ 0x180097364 (sub_180097364.c)
 * Callees:
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180094CA8 @ 0x180094CA8 (sub_180094CA8.c)
 */

__int64 __fastcall sub_180097434(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v6 = (_QWORD *)sub_1800642F0(a1);
  return sub_180094CA8((__int64 *)(a1 + 144), a2, a3, *(_DWORD *)(a1 + 124), 0, *(_DWORD *)(a1 + 304), v6);
}
