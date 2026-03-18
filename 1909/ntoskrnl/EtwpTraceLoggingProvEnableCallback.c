/*
 * XREFs of EtwpTraceLoggingProvEnableCallback @ 0x1406F4F80
 * Callers:
 *     <none>
 * Callees:
 *     EtwpPsProvCaptureState @ 0x1408FBFB8 (EtwpPsProvCaptureState.c)
 */

void __fastcall EtwpTraceLoggingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  if ( ControlCode == 2 && CallbackContext == &PsProvTraceLoggingGuid )
    EtwpPsProvCaptureState(CallbackContext, MatchAnyKeyword);
}
