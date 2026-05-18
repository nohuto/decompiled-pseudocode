/*
 * XREFs of sub_1800906D8 @ 0x1800906D8
 * Callers:
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_1800906D8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 160);
  return _bittest64(&v2, a2);
}
