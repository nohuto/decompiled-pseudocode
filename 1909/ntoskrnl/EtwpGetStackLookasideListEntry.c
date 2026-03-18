/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x14032C920
 * Callers:
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x14032CE44 (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY v0; // rax

  v0 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
  if ( v0 )
    return v0 + 1;
  else
    return 0LL;
}
