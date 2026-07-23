/*
 * XREFs of sub_1800DCAE4 @ 0x1800DCAE4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 */

NTSTATUS __fastcall sub_1800DCAE4(void *a1)
{
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  if ( !a1 )
    return -1073741585;
  v3 = 0;
  ProcessInformation = 1;
  return ZwSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}
