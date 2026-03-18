/*
 * XREFs of PfTFullEventListAdd @ 0x140122908
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1401228C0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140669B30 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400E2660 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C53B0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_14043BD20, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_14043BD20.Alignment);
    if ( LOWORD(stru_14043BD20.Alignment) <= (unsigned int)dword_14043BD30 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_14043BD20);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_14043BCA0,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
