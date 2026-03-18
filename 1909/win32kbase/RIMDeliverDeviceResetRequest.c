/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x1C0053400
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     rimDeviceResetApc @ 0x1C00A6380 (rimDeviceResetApc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *ApcContext)
{
  NTSTATUS v2; // edi
  int v3; // edx
  char *v5; // [rsp+50h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-40h] BYREF
  char **v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+80h] [rbp-18h]
  int v9; // [rsp+84h] [rbp-14h]

  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = ApcContext;
    v8 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E3E71, 0LL, 0LL, 3u, &pData);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_3a389e9a9423354ed9b7dc7a59c7a373_Traceguids,
      (char)ApcContext);
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v3, 1, 11, (__int64)&WPP_3a389e9a9423354ed9b7dc7a59c7a373_Traceguids);
    }
  }
  return (unsigned int)v2;
}
