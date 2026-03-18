/*
 * XREFs of PopSetSystemAwayMode @ 0x1408A8250
 * Callers:
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x140720410 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x1408A81CC (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_140443A31 )
    {
      if ( byte_140443A30 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_140443A34, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140443A34);
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
  else if ( byte_140443A31 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
