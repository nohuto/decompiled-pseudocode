/*
 * XREFs of MiTracingEnabledCallback @ 0x1405B18A0
 * Callers:
 *     <none>
 * Callees:
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 */

void __fastcall MiTracingEnabledCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode - 1 <= 1 && (MatchAnyKeyword & 0x20) != 0 )
    MiLogHotPatchRundown();
}
