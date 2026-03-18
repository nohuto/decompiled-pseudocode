/*
 * XREFs of ??$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C028C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C028C640 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 */

void __fastcall EnableDriverDiagnosticsTelemetryProviderCallback<0>(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  EnableDriverDiagnosticsTelemetryProviderImpl(0, ControlCode, MatchAnyKeyword);
}
