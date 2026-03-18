/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x1C0052780
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     rimDeviceResetApc @ 0x1C0092A20 (rimDeviceResetApc.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *ApcContext)
{
  NTSTATUS v2; // edi
  char *v4; // [rsp+50h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-40h] BYREF
  char **v6; // [rsp+78h] [rbp-20h]
  int v7; // [rsp+80h] [rbp-18h]
  int v8; // [rsp+84h] [rbp-14h]

  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = ApcContext;
    v7 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019FDAC, 0LL, 0LL, 3u, &pData);
  }
  WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0xAu, (__int64)&WPP_561493f090f23b34cdf78ea19e95d7f9_Traceguids, ApcContext);
  ObfReferenceObject(*((PVOID *)ApcContext + 4));
  v2 = ZwDeviceIoControlFile(
         *((HANDLE *)ApcContext + 28),
         0LL,
         rimDeviceResetApc,
         ApcContext,
         (PIO_STATUS_BLOCK)(ApcContext + 168),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v2 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)ApcContext + 4));
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xBu, (__int64)&WPP_561493f090f23b34cdf78ea19e95d7f9_Traceguids);
  }
  return (unsigned int)v2;
}
