/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x14030F230
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x14030F744 (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
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
