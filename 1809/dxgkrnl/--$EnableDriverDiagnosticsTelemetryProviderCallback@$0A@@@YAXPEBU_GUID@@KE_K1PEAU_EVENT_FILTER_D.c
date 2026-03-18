/*
 * XREFs of ??$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00B3860
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C00B389C (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 */

void __fastcall EnableDriverDiagnosticsTelemetryProviderCallback<0>(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  EnableDriverDiagnosticsTelemetryProviderImpl(0, ControlCode, MatchAnyKeyword);
}
