/*
 * XREFs of sub_1800978F0 @ 0x1800978F0
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180097820 @ 0x180097820 (sub_180097820.c)
 * Callees:
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180094BD0 @ 0x180094BD0 (sub_180094BD0.c)
 */

__int64 __fastcall sub_1800978F0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 2u;
  v6 = (_QWORD *)sub_1800642F0(a1);
  return sub_180094BD0((__int64 *)(a1 + 256), a2, a3, *(_DWORD *)(a1 + 124), 5, *(_DWORD *)(a1 + 304), v6);
}
