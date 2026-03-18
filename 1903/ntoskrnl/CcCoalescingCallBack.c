/*
 * XREFs of CcCoalescingCallBack @ 0x14027C9C0
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x1400F96E0 (CcForEachPartition.c)
 */

LONG_PTR __fastcall CcCoalescingCallBack(int a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcCoalescingCallBackHelper, (__int64)&v2, 0);
}
