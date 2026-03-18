/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x14078CFF0
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x1402B1A08 (KiIntSteerLogStatus.c)
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
