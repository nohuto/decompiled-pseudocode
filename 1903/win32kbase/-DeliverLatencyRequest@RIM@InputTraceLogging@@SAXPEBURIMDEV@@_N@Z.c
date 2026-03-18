/*
 * XREFs of ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1C0142B84
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0144104 (RIMSendLatencyMgtDeviceRequest.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverLatencyRequest(const struct RIMDEV *a1)
{
  unsigned __int8 v1; // r9
  __int64 v2; // r10
  UINT32 cData; // r11d
  int v4; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  UINT32 v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v5;
      v4 = v1;
      v10 = &v4;
      v5 = v2;
      v8 = 8;
      v11 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4B3D, 0LL, 0LL, cData, &pData);
    }
  }
}
