/*
 * XREFs of sub_1800DC88C @ 0x1800DC88C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 */

__int64 __fastcall sub_1800DC88C(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
