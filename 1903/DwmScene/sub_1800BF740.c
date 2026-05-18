/*
 * XREFs of sub_1800BF740 @ 0x1800BF740
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AE92C @ 0x1800AE92C (sub_1800AE92C.c)
 */

bool __fastcall sub_1800BF740(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a1;
  v3 = sub_1800AE92C(*a2);
  return (int)sub_1800AE92C(v2) > v3;
}
