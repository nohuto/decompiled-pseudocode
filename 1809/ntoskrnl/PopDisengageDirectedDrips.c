/*
 * XREFs of PopDisengageDirectedDrips @ 0x140868894
 * Callers:
 *     PopDirectedDripsNotify @ 0x14071E768 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsProcessWork @ 0x140868458 (PopDirectedDripsProcessWork.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140875B24 (PopPowerAggregatorDisengageDirectedDrips.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer2 @ 0x1400FAF50 (KeCancelTimer2.c)
 *     PnpUnlockDeviceActionQueue @ 0x140135370 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135414 (PnpLockDeviceActionQueue.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402D77F4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PipClearDeviceTreeStateFlags @ 0x1405796E0 (PipClearDeviceTreeStateFlags.c)
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x140871EEC (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x14089A708 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDisengageDirectedDrips(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( (_DWORD)result )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(*(_QWORD *)(a1 + 216), a2);
    if ( _InterlockedExchange(&PopDirectedDripsEngaged, 0) )
    {
      if ( PopDirectedDripsEnableV2 )
      {
        PopFxClearDirectedDripsCandidateDeviceList();
      }
      else
      {
        PnpLockDeviceActionQueue();
        PipClearDeviceTreeStateFlags(57344);
        PnpUnlockDeviceActionQueue();
      }
      PopDiagTraceDirectedDripsEngagedStatus(0LL);
      PopDeepSleepClearDisengageReason(8u);
    }
    KeCancelTimer2(a1 + 56);
    _InterlockedExchange((volatile __int32 *)(a1 + 196), *(_DWORD *)(a1 + 192));
    _InterlockedExchange((volatile __int32 *)(a1 + 208), 0);
    _InterlockedExchange((volatile __int32 *)(a1 + 204), 0);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFF1C3);
    return PdcTaskClientRequest(*(_QWORD *)(a1 + 216), 0LL);
  }
  return result;
}
