/*
 * XREFs of sub_180120820 @ 0x180120820
 * Callers:
 *     sub_180120CCC @ 0x180120CCC (sub_180120CCC.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_180121E24 @ 0x180121E24 (sub_180121E24.c)
 *     sub_180122FD0 @ 0x180122FD0 (sub_180122FD0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180120820(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v5 = (_QWORD *)sub_180122FD0(a1, a2, a3);
  v5[4] = 0LL;
  v5[5] = 0LL;
  try
  {
    sub_18001115C(v5 + 2, a4);
    v6 = a4 + 32;
    v7 = v5 + 6;
  }
  catch ( ... )
  {
    sub_180123480(a1, v5, 1LL);
    throw;
  }
  sub_180121E24(v7, v6);
  return v5;
}
