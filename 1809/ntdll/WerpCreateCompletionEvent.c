/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DEC7C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A0BE0 (ZwCreateEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  _OWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  LODWORD(v3[0]) = 48;
  *((_QWORD *)&v3[0] + 1) = 0LL;
  DWORD2(v3[1]) = 2;
  *(_QWORD *)&v3[1] = 0LL;
  v3[2] = 0LL;
  return ZwCreateEvent();
}
