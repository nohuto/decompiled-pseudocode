/*
 * XREFs of TppAlpcpFree @ 0x180083290
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x180031B40 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppAlpcpFree(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 - 9;
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  v2[7] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
