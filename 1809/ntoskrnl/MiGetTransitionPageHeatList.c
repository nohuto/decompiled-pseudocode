/*
 * XREFs of MiGetTransitionPageHeatList @ 0x1402CEDB4
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiGetTransitionPageHeatList()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rdx
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  result = RtlpInterlockedPopEntrySList(&stru_14043BB90);
  v1 = result;
  if ( result )
  {
    HIDWORD(result->Next) = 0;
    LODWORD(result->Next) = 1;
  }
  else
  {
    v2 = dword_14043BBA0;
    while ( v2 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&dword_14043BBA0, v2 - 1, v2);
      if ( v3 == v2 )
        return v1;
    }
    return (PSLIST_ENTRY)-1LL;
  }
  return result;
}
