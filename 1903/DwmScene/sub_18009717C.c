/*
 * XREFs of sub_18009717C @ 0x18009717C
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_1800970A8 @ 0x1800970A8 (sub_1800970A8.c)
 * Callees:
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180094D80 @ 0x180094D80 (sub_180094D80.c)
 */

__int64 __fastcall sub_18009717C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v8 = (_QWORD *)sub_1800642F0(a1);
  sub_180094D80((__int64 *)(a1 + 208), a2, a4, *(_DWORD *)(a1 + 124), 6, *(_DWORD *)(a1 + 304), v8);
  v9 = (_QWORD *)sub_1800642F0(a1);
  return sub_180094D80((__int64 *)(a1 + 224), a3, a4, *(_DWORD *)(a1 + 124), 7, *(_DWORD *)(a1 + 304), v9);
}
