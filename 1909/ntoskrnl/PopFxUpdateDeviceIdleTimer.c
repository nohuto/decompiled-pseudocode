/*
 * XREFs of PopFxUpdateDeviceIdleTimer @ 0x1401989D8
 * Callers:
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PoFxSetDeviceIdleTimeout @ 0x140198950 (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400E10E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400E27F4 (PopFxScheduleDeviceIdleTimer.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall PopFxUpdateDeviceIdleTimer(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 4) != 0 )
  {
    if ( KeCancelTimer((PKTIMER)(a1 + 360)) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFB);
      if ( !PopFxScheduleDeviceIdleTimer(a1) )
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a1 + 48), 0, 0);
        (*(void (__fastcall **)(_QWORD))(a1 + 144))(*(_QWORD *)(a1 + 192));
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF) != 1 )
          PopFxAddLogEntry(*(_QWORD *)(a1 + 48), 0, 17, 0LL);
      }
    }
  }
}
