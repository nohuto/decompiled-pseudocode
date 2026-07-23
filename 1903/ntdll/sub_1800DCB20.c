/*
 * XREFs of sub_1800DCB20 @ 0x1800DCB20
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_1800DCB20(void *a1)
{
  NTSTATUS InformationThread; // eax
  unsigned int v2; // ecx
  _BYTE ThreadInformation[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread(a1, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationThread < 0 )
    return 0;
  return v2;
}
