/*
 * XREFs of TppAlpcpFree @ 0x180086B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18002DA74 (TpAdjustBindingCount.c)
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
