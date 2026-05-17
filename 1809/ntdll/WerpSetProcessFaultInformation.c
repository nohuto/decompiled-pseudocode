/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800DEEE8
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x1800A0660 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  if ( a1 )
    return NtSetInformationProcess();
  else
    return 3221225711LL;
}
