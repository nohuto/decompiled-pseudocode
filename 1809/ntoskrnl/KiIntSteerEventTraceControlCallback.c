/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x140765440
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x14029AB98 (KiIntSteerLogStatus.c)
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
