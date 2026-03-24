/*
 * XREFs of EtwpDereferenceStackEntry @ 0x140315964
 * Callers:
 *     EtwpStackRundown @ 0x1403159D4 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140315C14 (EtwpTraceStackKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceCachedStack @ 0x140315B3C (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpDereferenceStackEntry(PSLIST_ENTRY ListEntry, unsigned int **a2)
{
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY result; // rax
  union _SLIST_HEADER *v5; // rsi
  struct _SLIST_ENTRY *Next; // rbx

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpTraceCachedStack(*((_QWORD *)*a2 + 135), **a2, 6179LL, ListEntry);
    v5 = (union _SLIST_HEADER *)(a2 + 2);
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
