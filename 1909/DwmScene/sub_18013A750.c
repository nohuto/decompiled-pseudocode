/*
 * XREFs of sub_18013A750 @ 0x18013A750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D4948 @ 0x1800D4948 (sub_1800D4948.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18013A750()
{
  __int64 v0; // rbx

  v0 = qword_18026BAC8;
  sub_1800D4948((__int64)&qword_18026BAC8, *(__int64 **)(qword_18026BAC8 + 8));
  *(_QWORD *)(qword_18026BAC8 + 8) = v0;
  *(_QWORD *)qword_18026BAC8 = v0;
  *(_QWORD *)(qword_18026BAC8 + 16) = v0;
  qword_18026BAD0 = 0LL;
  j_j__o_free();
}
