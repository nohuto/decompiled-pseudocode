/*
 * XREFs of EtwpDereferenceStackEntry @ 0x140333DB8
 * Callers:
 *     EtwpStackRundown @ 0x140333E28 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140334068 (EtwpTraceStackKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceCachedStack @ 0x140333F90 (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpDereferenceStackEntry(PSLIST_ENTRY ListEntry, unsigned int **a2)
{
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_HEADER *v5; // rsi
  _SLIST_ENTRY *Next; // rbx

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpTraceCachedStack(*((_QWORD *)*a2 + 135), **a2, 6179LL, ListEntry);
    v5 = (_SLIST_HEADER *)(a2 + 2);
    do
    {
      Next = v3[1].Next;
      result = RtlpInterlockedPushEntrySList(v5, v3);
      v3 = Next;
    }
    while ( Next );
  }
  return result;
}
