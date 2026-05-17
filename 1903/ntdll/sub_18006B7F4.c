/*
 * XREFs of sub_18006B7F4 @ 0x18006B7F4
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     sub_1800DCB54 @ 0x1800DCB54 (sub_1800DCB54.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_18006B7F4(__int64 a1)
{
  int InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = ZwQueryInformationProcess(a1, 0LL, v4);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
