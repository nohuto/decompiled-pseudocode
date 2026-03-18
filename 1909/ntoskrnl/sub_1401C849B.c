/*
 * XREFs of sub_1401C849B @ 0x1401C849B
 * Callers:
 *     sub_1401C8384 @ 0x1401C8384 (sub_1401C8384.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1401C849B()
{
  __int64 v0; // rbp
  int result; // eax

  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
