/*
 * XREFs of PopDirectedDripsEngagePs4 @ 0x1408A40CC
 * Callers:
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x1408B2A10 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x1408AED1C (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x1408D9274 (PdcTaskClientRequest.c)
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
    result = PdcTaskClientRequest(qword_140444B00, a2);
    if ( (int)result >= 0 )
    {
      PdcTaskClientRequest(qword_140444B00, 0LL);
      LOBYTE(v3) = 1;
      return PopDiagTraceDirectedDripsEngagedStatus(v3);
    }
  }
  return result;
}
