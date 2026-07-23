/*
 * XREFs of PopDoesFxDeviceSupportDirectedTransition @ 0x1402D6D00
 * Callers:
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     PopDripsWatchdogReportDirectedDripsDevice @ 0x14087A99C (PopDripsWatchdogReportDirectedDripsDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopDoesFxDeviceSupportDirectedTransition(__int64 a1)
{
  char v1; // r8
  __int64 v2; // rax

  v1 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 704) & 0x8000) == 0 )
        return (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 808), 0, 0) & 0x20) != 0;
    }
  }
  return v1;
}
