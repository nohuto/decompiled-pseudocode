/*
 * XREFs of PopDisengageDirectedDrips @ 0x1408A46C4
 * Callers:
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B2114 (PopPowerAggregatorDisengageDirectedDrips.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402F2554 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x1408AE57C (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x1408D8B74 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDisengageDirectedDrips(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( (_DWORD)result )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(qword_1404447E0, a2);
    if ( _InterlockedExchange(&PopDirectedDripsEngaged, 0) )
    {
      PopFxClearDirectedDripsCandidateDeviceList();
      PopDiagTraceDirectedDripsEngagedStatus(0LL);
      PopDeepSleepClearDisengageReason(8u);
    }
    dword_1404449D0 = 0;
    _InterlockedAnd(PopDirectedDripsState, 0xFFFFC1C7);
    return PdcTaskClientRequest(qword_1404447E0, 0LL);
  }
  return result;
}
