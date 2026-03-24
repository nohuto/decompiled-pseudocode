/*
 * XREFs of PopDirectedDripsEngagePs4 @ 0x140867B90
 * Callers:
 *     PopDirectedDripsNotify @ 0x14071E748 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x140875B90 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x140871ECC (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x14089A6E8 (PdcTaskClientRequest.c)
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
    result = PdcTaskClientRequest(qword_140419178, a2);
    if ( (int)result >= 0 )
    {
      PdcTaskClientRequest(qword_140419178, 0LL);
      LOBYTE(v3) = 1;
      return PopDiagTraceDirectedDripsEngagedStatus(v3);
    }
  }
  return result;
}
