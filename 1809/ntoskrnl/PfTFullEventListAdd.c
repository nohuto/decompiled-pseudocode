/*
 * XREFs of PfTFullEventListAdd @ 0x1401229F8
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1401229B0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14066ACD0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400E2700 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_14043CDE0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_14043CDE0.Alignment);
    if ( LOWORD(stru_14043CDE0.Alignment) <= (unsigned int)dword_14043CDF0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_14043CDE0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_14043CD60,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
