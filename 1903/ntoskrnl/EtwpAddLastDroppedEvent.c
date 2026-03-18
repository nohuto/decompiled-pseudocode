/*
 * XREFs of EtwpAddLastDroppedEvent @ 0x1403320A0
 * Callers:
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003AC0 (EtwpQueryUsedProcessorCount.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     EtwpAddEventToBuffer @ 0x1406B8754 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddLastDroppedEvent(__int64 a1)
{
  int UsedProcessorCount; // eax
  __int64 v4; // rdx
  int v5; // r9d
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned int *v8; // rdx
  char v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1320) )
    return 3221225659LL;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  if ( !EtwpAddEventToBuffer(v6, 82LL, v4 + 88, *(_QWORD *)(a1 + 1320), 8 * UsedProcessorCount + 8, v5, &v9) )
    return 3221225990LL;
  v7 = EtwpQueryUsedProcessorCount(a1);
  *v8 = v7;
  memmove(v8 + 2, *(const void **)(a1 + 1320), 8LL * v7);
  return 0LL;
}
