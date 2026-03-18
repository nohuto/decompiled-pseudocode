/*
 * XREFs of ViPoolDelayFreeTrimThreadRoutine @ 0x140938140
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlpInterlockedFlushSList @ 0x1401C5430 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall __noreturn ViPoolDelayFreeTrimThreadRoutine(union _SLIST_HEADER *StartContext)
{
  PSLIST_ENTRY v2; // rax
  struct _SLIST_ENTRY *Next; // rbx

  while ( 1 )
  {
    do
    {
      KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
      ++*((_DWORD *)&StartContext[3].HeaderX64 + 3);
      v2 = RtlpInterlockedFlushSList(StartContext);
    }
    while ( !v2 );
    do
    {
      Next = v2->Next;
      ExFreePoolWithTag(v2, 0);
      v2 = Next;
    }
    while ( Next );
  }
}
