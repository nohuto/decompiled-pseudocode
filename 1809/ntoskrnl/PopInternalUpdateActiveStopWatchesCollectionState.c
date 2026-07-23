/*
 * XREFs of PopInternalUpdateActiveStopWatchesCollectionState @ 0x140001E98
 * Callers:
 *     PoPauseStopWatch @ 0x140001F30 (PoPauseStopWatch.c)
 *     PoStartStopWatch @ 0x140001F80 (PoStartStopWatch.c)
 *     PoArmStopWatchCollection @ 0x1402E93C0 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x1402E9494 (PoUnarmStopWatchCollection.c)
 * Callees:
 *     <none>
 */

char __fastcall PopInternalUpdateActiveStopWatchesCollectionState(__int64 a1)
{
  bool v2; // cl
  __int64 v3; // rdx
  char result; // al
  unsigned __int64 v5; // rdx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 48), 0) > 0 && *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  result = v3 != 0;
  if ( v2 != (v3 != 0) )
  {
    result = MEMORY[0xFFFFF78000000008];
    if ( v2 )
    {
      *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 40) - v3 + MEMORY[0xFFFFF78000000008];
      result = -1;
      if ( v5 < *(_QWORD *)(a1 + 40) )
        v5 = -1LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = v5;
    }
  }
  return result;
}
