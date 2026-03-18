/*
 * XREFs of PopDirectedDripsEngagePs4 @ 0x1408A390C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x1408B2270 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x1408AE57C (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x1408D8B74 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDirectedDripsEngagePs4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  _m_prefetchw(PopDirectedDripsState);
  result = (unsigned int)_InterlockedOr(PopDirectedDripsState, 0xA00u);
  if ( (result & 0x800) == 0 )
  {
    LOBYTE(a2) = 1;
    _InterlockedExchange(&PopDirectedDripsEngaged, 1);
    result = PdcTaskClientRequest(qword_1404447E0, a2);
    if ( (int)result >= 0 )
    {
      PdcTaskClientRequest(qword_1404447E0, 0LL);
      LOBYTE(v3) = 1;
      return PopDiagTraceDirectedDripsEngagedStatus(v3);
    }
  }
  return result;
}
