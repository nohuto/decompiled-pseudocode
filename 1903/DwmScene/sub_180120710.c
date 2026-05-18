/*
 * XREFs of sub_180120710 @ 0x180120710
 * Callers:
 *     sub_180120BBC @ 0x180120BBC (sub_180120BBC.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180121D14 @ 0x180121D14 (sub_180121D14.c)
 *     sub_180122EC0 @ 0x180122EC0 (sub_180122EC0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180120710(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v5 = (_QWORD *)sub_180122EC0(a1, a2, a3);
  v5[4] = 0LL;
  v5[5] = 0LL;
  try
  {
    sub_18001110C(v5 + 2, a4);
    v6 = a4 + 32;
    v7 = v5 + 6;
  }
  catch ( ... )
  {
    sub_180123370(a1, v5, 1LL);
    throw;
  }
  sub_180121D14(v7, v6);
  return v5;
}
