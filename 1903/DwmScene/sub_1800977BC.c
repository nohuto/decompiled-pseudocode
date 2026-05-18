/*
 * XREFs of sub_1800977BC @ 0x1800977BC
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 * Callees:
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180094BD0 @ 0x180094BD0 (sub_180094BD0.c)
 */

__int64 __fastcall sub_1800977BC(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 1u;
  v6 = (_QWORD *)sub_1800642F0(a1);
  return sub_180094BD0((__int64 *)(a1 + 240), a2, a3, *(_DWORD *)(a1 + 124), 4, *(_DWORD *)(a1 + 304), v6);
}
