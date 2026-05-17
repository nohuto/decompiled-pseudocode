/*
 * XREFs of sub_1800DCAE4 @ 0x1800DCAE4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 */

__int64 __fastcall sub_1800DCAE4(__int64 a1)
{
  if ( a1 )
    return ZwSetInformationProcess();
  else
    return 3221225711LL;
}
