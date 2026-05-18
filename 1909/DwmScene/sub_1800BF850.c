/*
 * XREFs of sub_1800BF850 @ 0x1800BF850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AEA3C @ 0x1800AEA3C (sub_1800AEA3C.c)
 */

bool __fastcall sub_1800BF850(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a1;
  v3 = sub_1800AEA3C(*a2);
  return (int)sub_1800AEA3C(v2) > v3;
}
