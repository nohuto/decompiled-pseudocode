/*
 * XREFs of PoResetStopWatch @ 0x140306834
 * Callers:
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoResetStopWatch(__int64 a1)
{
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), -*(_DWORD *)(a1 + 44));
}
