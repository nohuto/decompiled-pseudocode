/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DC94C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DBF80 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009D790 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
