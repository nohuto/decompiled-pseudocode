/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C006C9DC
 * Callers:
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00B3D6C (RIMEnumerateDevicesForTelemetry.c)
 *     _lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_ @ 0x1C0134510 (_lambda_3346b6da4304b6cf0870d144c3e6654c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0032B80 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01346BC (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0134700 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0134C14 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0134CE4 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0134E84 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1)
{
  unsigned int v2; // ecx
  const CHAR *v3; // rax
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  int v7; // r10d
  int v8; // r10d
  const CHAR *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // r11
  const struct RIMDEV *v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  const struct RIMDEV **v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+98h] [rbp-70h] BYREF
  _DWORD *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  _DWORD v28[2]; // [rsp+C0h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C8h] [rbp-40h] BYREF
  char *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+E8h] [rbp-20h] BYREF
  char *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  char *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  char *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  char *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  char *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  char *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  char *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  char *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020FB50, 0, 0LL) )
  {
    if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v2 = *((unsigned __int8 *)a1 + 48);
      v21 = &v17;
      v17 = a1;
      v22 = 8LL;
      v3 = InputTraceLogging::RimDevTypeToString(v2);
      TlgCreateSz(&pDesc, v3);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 1 )
                v9 = "Reset";
              else
                v9 = (const CHAR *)&unk_1C01EBCD8;
            }
            else
            {
              v9 = "Destroyed";
            }
          }
          else
          {
            v9 = "Closed";
          }
        }
        else
        {
          v9 = "Opened";
        }
      }
      else
      {
        v9 = "Created";
      }
      TlgCreateSz(&v24, v9);
      v10 = *((_DWORD *)a1 + 526);
      v25 = v28;
      v27 = *((_QWORD *)a1 + 27);
      v28[0] = *((unsigned __int16 *)a1 + 104);
      v26 = 2LL;
      v28[1] = 0;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v12 = "Unknown";
          else
            v12 = "UNKNOWN";
        }
        else
        {
          v12 = "External";
        }
      }
      else
      {
        v12 = "Integrated";
      }
      TlgCreateSz(&v29, v12);
      v13 = (const WCHAR *)*((_QWORD *)a1 + 264);
      v30 = (char *)a1 + 2088;
      v31 = 16LL;
      TlgCreateWsz(&v32, v13);
      v34 = 8LL;
      v35 = (char *)a1 + 204;
      v33 = (char *)a1 + 192;
      v37 = (char *)a1 + 205;
      v39 = (char *)a1 + 206;
      v41 = (char *)a1 + 248;
      v43 = (char *)a1 + 288;
      v45 = (char *)a1 + 272;
      v47 = (char *)a1 + 152;
      v15 = v14 - *((_QWORD *)a1 + 8);
      v16 = v14 - *((_QWORD *)a1 + 9);
      v18 = v15;
      v49 = &v18;
      v51 = &v19;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 1LL;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 8LL;
      v19 = v16;
      v52 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4672, 0LL, 0LL, 0x14u, &pData);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1);
    if ( (*((_DWORD *)a1 + 50) & 0x80u) == 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1);
    }
    if ( *((_DWORD *)a1 + 330) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
