/*
 * XREFs of PoResetStopWatch @ 0x1402E945C
 * Callers:
 *     PopPublishAndPurgePowerRequestStats @ 0x14087C07C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoResetStopWatch(__int64 a1)
{
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), -*(_DWORD *)(a1 + 44));
}
