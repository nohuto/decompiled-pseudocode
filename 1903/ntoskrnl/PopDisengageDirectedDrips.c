/*
 * XREFs of PopDisengageDirectedDrips @ 0x1408A4E84
 * Callers:
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B28B4 (PopPowerAggregatorDisengageDirectedDrips.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402F27F4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x1408AED1C (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x1408D9274 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDisengageDirectedDrips(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( (_DWORD)result )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(qword_140444B00, a2);
    if ( _InterlockedExchange(&PopDirectedDripsEngaged, 0) )
    {
      PopFxClearDirectedDripsCandidateDeviceList();
      PopDiagTraceDirectedDripsEngagedStatus(0LL);
      PopDeepSleepClearDisengageReason(8u);
    }
    dword_140444CF0 = 0;
    _InterlockedAnd(PopDirectedDripsState, 0xFFFFC1C7);
    return PdcTaskClientRequest(qword_140444B00, 0LL);
  }
  return result;
}
