/*
 * XREFs of RtlDeleteUmsThreadContext @ 0x1800F6300
 * Callers:
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F68D0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F6994 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteUmsThreadContext(PVOID BaseAddress)
{
  unsigned int v2; // [rsp+38h] [rbp+10h]

  v2 = -1073741811;
  if ( BaseAddress && (*((_DWORD *)BaseAddress + 316) & 8) != 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return v2;
}
