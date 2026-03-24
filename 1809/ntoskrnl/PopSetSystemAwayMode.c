/*
 * XREFs of PopSetSystemAwayMode @ 0x14086C0E0
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE850 (PopIssueActionRequest.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeDpc @ 0x1400A56F0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x1406DBBC4 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x14086C058 (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_1404180D1 )
    {
      if ( byte_1404180D0 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_1404180D4, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_1404180D4);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_1404180D1 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
