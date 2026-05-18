/*
 * XREFs of sub_1801209BC @ 0x1801209BC
 * Callers:
 *     sub_180121AFC @ 0x180121AFC (sub_180121AFC.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_18012301C @ 0x18012301C (sub_18012301C.c)
 *     sub_1801245DC @ 0x1801245DC (sub_1801245DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801209BC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = sub_18012301C(a1);
  *(_WORD *)(v4 + 24) = 0;
  v5 = *a3;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  try
  {
    sub_18001115C((_QWORD *)(v4 + 32), v5);
    v6 = v4 + 64;
  }
  catch ( ... )
  {
    sub_18012327C(a1, v4);
    throw;
  }
  sub_1801245DC(v6);
  return v4;
}
