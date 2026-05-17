/*
 * XREFs of TppIopFree @ 0x180031300
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18002DA74 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppIopFree(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  volatile signed __int32 *v3; // r8
  __int64 v4; // r9

  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  a1[32] = 0LL;
  TppCleanupGroupMemberDestroy(a1, v2, v3, v4);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, (unsigned __int64)a1);
}
