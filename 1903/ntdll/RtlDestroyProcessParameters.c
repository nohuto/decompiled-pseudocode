/*
 * XREFs of RtlDestroyProcessParameters @ 0x18007E940
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDestroyProcessParameters(__int64 a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
