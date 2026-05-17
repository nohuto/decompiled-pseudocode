/*
 * XREFs of sub_18007BD70 @ 0x18007BD70
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall sub_18007BD70(__int64 a1)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 2883584, a1);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
