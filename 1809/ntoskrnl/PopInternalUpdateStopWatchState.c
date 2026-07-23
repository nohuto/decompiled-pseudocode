/*
 * XREFs of PopInternalUpdateStopWatchState @ 0x140001EF8
 * Callers:
 *     PoPauseStopWatch @ 0x140001F30 (PoPauseStopWatch.c)
 *     PoStartStopWatch @ 0x140001F80 (PoStartStopWatch.c)
 *     PoArmStopWatchCollection @ 0x1402E93C0 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x1402E9494 (PoUnarmStopWatchCollection.c)
 * Callees:
 *     <none>
 */

char __fastcall PopInternalUpdateStopWatchState(__int64 a1)
{
  bool v2; // cl
  __int64 v3; // rdx
  char result; // al
  unsigned __int64 v5; // rdx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0) > 0 && *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v3 = *(_QWORD *)(a1 + 24);
  result = v3 != 0;
  if ( v2 != (v3 != 0) )
  {
    result = MEMORY[0xFFFFF78000000008];
    if ( v2 )
    {
      *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008];
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 32) - v3 + MEMORY[0xFFFFF78000000008];
      result = -1;
      if ( v5 < *(_QWORD *)(a1 + 32) )
        v5 = -1LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = v5;
    }
  }
  return result;
}
