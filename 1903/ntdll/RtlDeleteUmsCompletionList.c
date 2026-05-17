/*
 * XREFs of RtlDeleteUmsCompletionList @ 0x1800F3570
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall RtlDeleteUmsCompletionList(__int64 a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    ZwClose();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 0LL;
  }
  return result;
}
