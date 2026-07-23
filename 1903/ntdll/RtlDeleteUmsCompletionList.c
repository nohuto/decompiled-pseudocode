/*
 * XREFs of RtlDeleteUmsCompletionList @ 0x1800F3570
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall RtlDeleteUmsCompletionList(HANDLE *BaseAddress)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( BaseAddress )
  {
    ZwClose(BaseAddress[1]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0LL;
  }
  return result;
}
