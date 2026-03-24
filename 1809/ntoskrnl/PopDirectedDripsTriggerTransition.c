/*
 * XREFs of PopDirectedDripsTriggerTransition @ 0x140868780
 * Callers:
 *     PopDirectedDripsNotify @ 0x14071E748 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x140875B90 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x140871ECC (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x14089A6E8 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDirectedDripsTriggerTransition(__int64 a1, __int64 a2)
{
  char v2; // cl
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = _InterlockedExchangeAdd(&PopDirectedDripsState, 0);
  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( !(_DWORD)result && (v2 & 4) == 0 )
  {
    LOBYTE(a2) = 1;
    result = PdcTaskClientRequest(qword_140419178, a2);
    if ( (int)result >= 0 )
    {
      _InterlockedExchange(&PopDirectedDripsEngaged, 1);
      _InterlockedOr(&PopDirectedDripsState, 0x800u);
      PdcTaskClientRequest(qword_140419178, 0LL);
      LOBYTE(v4) = 1;
      return PopDiagTraceDirectedDripsEngagedStatus(v4);
    }
  }
  return result;
}
