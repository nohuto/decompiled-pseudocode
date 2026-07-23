/*
 * XREFs of EtwpTraceLoggingProvEnableCallback @ 0x1406D4FE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpPsProvCaptureState @ 0x1408C0AC0 (EtwpPsProvCaptureState.c)
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
