/*
 * XREFs of WheapEtwEnableCallback @ 0x14078BA40
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x1403400D8 (WheapFreeErrorRecord.c)
 *     WheapSendErrorRecordTelemetry @ 0x14034027C (WheapSendErrorRecordTelemetry.c)
 *     WheapGenerateETWEvents @ 0x140341240 (WheapGenerateETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  WheapEventingInitialized = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
      v4 = (__int64 *)WheapWaitingETWEvents;
      if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents )
        goto LABEL_9;
      v5 = *(_QWORD *)WheapWaitingETWEvents;
      if ( *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents )
        goto LABEL_9;
      WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
      *(_QWORD *)(v5 + 8) = &WheapWaitingETWEvents;
      KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
      if ( v4 == &WheapWaitingETWEvents )
        break;
      WheapGenerateETWEvents((__int64)(v4 + 5));
      WheapSendErrorRecordTelemetry((__int64)(v4 + 5));
      WheapFreeErrorRecord((ULONG_PTR)v4);
    }
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v6 = WheapDeferredInternalLogs;
      if ( *(__int64 **)(WheapDeferredInternalLogs + 8) != &WheapDeferredInternalLogs )
        break;
      v7 = *(_QWORD *)WheapDeferredInternalLogs;
      if ( *(_QWORD *)(*(_QWORD *)WheapDeferredInternalLogs + 8LL) != WheapDeferredInternalLogs )
        break;
      WheapDeferredInternalLogs = *(_QWORD *)WheapDeferredInternalLogs;
      *(_QWORD *)(v7 + 8) = &WheapDeferredInternalLogs;
      KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
      if ( (__int64 *)v6 == &WheapDeferredInternalLogs )
        return;
      WheaLogInternalEvent((_DWORD *)(v6 + 16));
    }
LABEL_9:
    __fastfail(3u);
  }
}
