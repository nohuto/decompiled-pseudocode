/*
 * XREFs of sub_1800DCB20 @ 0x1800DCB20
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 sub_1800DCB20()
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
