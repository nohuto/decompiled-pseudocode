/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x140764270
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x14029A8A8 (KiIntSteerLogStatus.c)
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
