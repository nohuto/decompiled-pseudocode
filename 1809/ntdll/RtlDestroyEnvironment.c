/*
 * XREFs of RtlDestroyEnvironment @ 0x1800841C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDestroyEnvironment(unsigned __int64 a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
