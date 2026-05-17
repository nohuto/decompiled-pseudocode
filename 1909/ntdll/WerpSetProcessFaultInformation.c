/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800DCBA4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DBF80 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  if ( a1 )
    return NtSetInformationProcess();
  else
    return 3221225711LL;
}
