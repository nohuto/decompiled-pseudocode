/*
 * XREFs of sub_18013A640 @ 0x18013A640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D4838 @ 0x1800D4838 (sub_1800D4838.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18013A640()
{
  __int64 v0; // rbx

  v0 = qword_18026AAC8;
  sub_1800D4838((__int64)&qword_18026AAC8, *(__int64 **)(qword_18026AAC8 + 8));
  *(_QWORD *)(qword_18026AAC8 + 8) = v0;
  *(_QWORD *)qword_18026AAC8 = v0;
  *(_QWORD *)(qword_18026AAC8 + 16) = v0;
  qword_18026AAD0 = 0LL;
  j_j__o_free();
}
