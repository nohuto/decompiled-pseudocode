/*
 * XREFs of PopDirectedDripsEngagePs4 @ 0x140868DF0
 * Callers:
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x140876DF0 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x14087312C (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x14089B948 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDirectedDripsEngagePs4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  _m_prefetchw(&PopDirectedDripsState);
  result = (unsigned int)_InterlockedOr(&PopDirectedDripsState, 0xE00u);
  if ( (result & 0x800) == 0 )
  {
    LOBYTE(a2) = 1;
    _InterlockedExchange(&PopDirectedDripsEngaged, 1);
    result = PdcTaskClientRequest(qword_14041A258, a2);
    if ( (int)result >= 0 )
    {
      PdcTaskClientRequest(qword_14041A258, 0LL);
      LOBYTE(v3) = 1;
      return PopDiagTraceDirectedDripsEngagedStatus(v3);
    }
  }
  return result;
}
