/*
 * XREFs of PpmCheckPeriodicStart @ 0x1400BD370
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PpmCheckStart @ 0x1400BE700 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14013CCF4 (PpmEventTraceFailedPerfCheckStart.c)
 */

__int64 __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&stru_1404437E8, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0LL);
}
