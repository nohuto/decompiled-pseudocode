/*
 * XREFs of sub_1801243FC @ 0x1801243FC
 * Callers:
 *     sub_180124464 @ 0x180124464 (sub_180124464.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_180122FD0 @ 0x180122FD0 (sub_180122FD0.c)
 *     sub_1801245DC @ 0x1801245DC (sub_1801245DC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801243FC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 *a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v6 = sub_180122FD0(a1, a2, a3);
  v7 = *a5;
  v6[4] = 0LL;
  v6[5] = 0LL;
  try
  {
    sub_18001115C(v6 + 2, v7);
    v8 = v6 + 6;
  }
  catch ( ... )
  {
    sub_180123480(a1, (__int64)v6, 1LL);
    throw;
  }
  sub_1801245DC(v8);
  return v6;
}
