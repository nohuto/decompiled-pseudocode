/*
 * XREFs of PfTFullEventListAdd @ 0x140123A18
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1401239D0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14065B0D0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140098178 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_1404677E0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_1404677E0.Alignment);
    if ( LOWORD(stru_1404677E0.Alignment) <= (unsigned int)dword_1404677F0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_1404677E0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140467760,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
