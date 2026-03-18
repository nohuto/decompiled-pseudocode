/*
 * XREFs of ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0142AC4
 * Callers:
 *     RIMSetDeviceIdleTimeout @ 0x1C014440C (RIMSetDeviceIdleTimeout.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverIdleTimeoutRequest(const struct RIMDEV *a1)
{
  __int64 v1; // r9
  UINT32 cData; // r10d
  int v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  UINT32 v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v3 = 30000;
  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      v9 = &v3;
      v4 = v1;
      v7 = 8;
      v10 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4AFE, 0LL, 0LL, cData, &pData);
    }
  }
}
