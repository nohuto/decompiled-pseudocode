/*
 * XREFs of WerpThreadId @ 0x1800DEF2C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 */

__int64 WerpThreadId()
{
  int InformationThread; // eax
  unsigned int v1; // ecx
  unsigned int v3; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread();
  v1 = v3;
  if ( InformationThread < 0 )
    return 0;
  return v1;
}
