/*
 * XREFs of EtwpTraceLoggingProvEnableCallback @ 0x1406D3D60
 * Callers:
 *     <none>
 * Callees:
 *     EtwpPsProvCaptureState @ 0x1408BF820 (EtwpPsProvCaptureState.c)
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
