/*
 * XREFs of ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C015478C
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0154CEC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0157D10 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimPopulateContactFrameData @ 0x1C0158198 (rimPopulateContactFrameData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01345B0 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::PopulateContact(__int64 a1, __int64 a2, __int16 a3, __int64 a4, int a5)
{
  __int64 v5; // r9
  __int64 v6; // r10
  const CHAR *v7; // rdx
  int v8; // r11d
  const char *v9; // rax
  __int64 v10; // [rsp+30h] [rbp-41h] BYREF
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+6Ch] [rbp-5h]
  __int64 *v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+7Ch] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+Fh] BYREF
  __int16 *v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+9Ch] [rbp+2Bh]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp+2Fh] BYREF
  __int16 v24; // [rsp+E0h] [rbp+6Fh] BYREF

  v24 = a3;
  if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v11 = *(_QWORD *)(v5 + 80);
    v14 = 8;
    v17 = 8;
    v16 = &v11;
    v10 = v6;
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v7 = "SimulatedKeepAlive";
      }
      else if ( a5 == 2 )
      {
        v7 = "SimulatedEndState";
      }
      else
      {
        v7 = "UNKNOWN";
      }
    }
    else
    {
      v7 = "DeviceInput";
    }
    TlgCreateSz(&pDesc, v7);
    v22 = 0;
    v20 = &v24;
    v21 = 2;
    v9 = InputTraceLogging::PointerDeviceTypeToString(v8);
    TlgCreateSz(&v23, v9);
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E5C4C, 0LL, 0LL, 7u, &pData);
  }
}
