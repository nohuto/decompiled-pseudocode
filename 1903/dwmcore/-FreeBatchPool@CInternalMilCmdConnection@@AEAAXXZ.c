/*
 * XREFs of ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180091B48
 * Callers:
 *     ?ClearCaches@CInternalMilCmdConnection@@UEAA_NK@Z @ 0x1800C2780 (-ClearCaches@CInternalMilCmdConnection@@UEAA_NK@Z.c)
 *     ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x180156FD8 (--1CInternalMilCmdConnection@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall CInternalMilCmdConnection::FreeBatchPool(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v1; // rdi
  struct _SLIST_ENTRY *v2; // rbx
  struct _SLIST_ENTRY *Next; // rsi
  struct _SLIST_ENTRY *v4; // rcx
  struct _SLIST_ENTRY *v5; // rsi
  HANDLE ProcessHeap; // rax
  struct _SLIST_ENTRY *v7; // rcx

  v1 = InterlockedFlushSList(this + 12);
  while ( v1 )
  {
    v2 = v1 - 4;
    v1 = v1->Next;
    if ( v2 )
    {
      Next = v2->Next;
      while ( Next != v2 )
      {
        v4 = Next;
        Next = Next->Next;
        operator delete(v4);
      }
      operator delete(v2[2].Next);
      v5 = v2[1].Next;
      while ( v5 != &v2[1] )
      {
        v7 = v5;
        v5 = v5->Next;
        operator delete(v7);
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
  }
}
