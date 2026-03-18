/*
 * XREFs of sub_1401C080B @ 0x1401C080B
 * Callers:
 *     sub_1401C06F4 @ 0x1401C06F4 (sub_1401C06F4.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1401C080B()
{
  __int64 v0; // rbp
  int result; // eax

  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x856u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
