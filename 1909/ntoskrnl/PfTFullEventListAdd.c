/*
 * XREFs of PfTFullEventListAdd @ 0x140124408
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1401243C0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14066D960 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400D48F4 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_1404674E0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_1404674E0.Alignment);
    if ( LOWORD(stru_1404674E0.Alignment) <= (unsigned int)dword_1404674F0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_1404674E0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140467460,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
