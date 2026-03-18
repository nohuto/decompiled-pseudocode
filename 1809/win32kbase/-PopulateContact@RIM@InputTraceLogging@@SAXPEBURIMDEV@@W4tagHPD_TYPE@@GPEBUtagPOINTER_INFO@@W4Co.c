/*
 * XREFs of ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0127D0C
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimPopulateContactFrameData @ 0x1C012B2F8 (rimPopulateContactFrameData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A730 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0127CA4 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::PopulateContact(__int64 a1, __int64 a2, __int16 a3, __int64 a4, int a5)
{
  __int64 v5; // r9
  __int64 v6; // r10
  const CHAR *v7; // rdx
  int v8; // r11d
  const char *v9; // rax
  int *v10; // r9
  int v11; // ecx
  const char *v12; // rax
  _DWORD *v13; // r9
  int v14; // ecx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  __int16 *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  _DWORD *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  __int16 v61; // [rsp+1F0h] [rbp+F0h] BYREF

  v61 = a3;
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
  {
    v28 = &v25;
    v26 = *(_QWORD *)(v5 + 80);
    v30 = &v26;
    v25 = v6;
    v29 = 8LL;
    v31 = 8LL;
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
    v34 = 2LL;
    v33 = &v61;
    v9 = InputTraceLogging::PointerDeviceTypeToString(v8);
    TlgCreateSz(&v35, v9);
    v15 = v10[2];
    v36 = v10 + 1;
    v11 = *v10;
    v38 = &v15;
    v37 = 4LL;
    v39 = 4LL;
    v12 = InputTraceLogging::PointerTypeToString(v11);
    TlgCreateSz(&v40, v12);
    v14 = v13[3];
    v41 = &v16;
    v17 = v13[8];
    v43 = &v17;
    v18 = v13[9];
    v45 = &v18;
    v19 = v13[12];
    v47 = &v19;
    v20 = v13[13];
    v49 = &v20;
    v21 = v13[10];
    v51 = &v21;
    v22 = v13[11];
    v53 = &v22;
    v23 = v13[14];
    v55 = &v23;
    v24 = v13[15];
    v57 = &v24;
    v59 = v13 + 18;
    v16 = v14;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019FAC6, 0LL, 0LL, 0x14u, &pData);
  }
}
