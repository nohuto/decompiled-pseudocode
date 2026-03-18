/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x14078AB10
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x1402B1CA8 (KiIntSteerLogStatus.c)
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
