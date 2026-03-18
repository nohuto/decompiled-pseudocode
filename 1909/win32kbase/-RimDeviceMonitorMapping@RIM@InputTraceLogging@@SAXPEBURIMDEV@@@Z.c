/*
 * XREFs of ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0132674
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0058A7C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceMonitorMapping(const struct RIMDEV *a1)
{
  __int64 v1; // r10
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  const CHAR *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r10
  _DWORD *v11; // r10
  int v12; // ecx
  int v13; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+34h] [rbp-75h] BYREF
  int v15; // [rsp+38h] [rbp-71h] BYREF
  int v16; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v17; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-39h]
  __int64 v20; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp-9h] BYREF
  int *v24; // [rsp+B0h] [rbp+7h]
  __int64 v25; // [rsp+B8h] [rbp+Fh]
  int *v26; // [rsp+C0h] [rbp+17h]
  __int64 v27; // [rsp+C8h] [rbp+1Fh]
  int *v28; // [rsp+D0h] [rbp+27h]
  __int64 v29; // [rsp+D8h] [rbp+2Fh]
  int *v30; // [rsp+E0h] [rbp+37h]
  __int64 v31; // [rsp+E8h] [rbp+3Fh]

  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
  {
    v2 = *(_DWORD *)(v1 + 1352);
    v19 = &v17;
    v17 = v1;
    v20 = 8LL;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( v7 )
              {
                if ( v7 == 1 )
                  v8 = "Monitor";
                else
                  v8 = "UNKNOWN";
              }
              else
              {
                v8 = "OEM";
              }
            }
            else
            {
              v8 = "DefaultFallback";
            }
          }
          else
          {
            v8 = "DefaultPrimary";
          }
        }
        else
        {
          v8 = "Automatic";
        }
      }
      else
      {
        v8 = "User";
      }
    }
    else
    {
      v8 = "None";
    }
    TlgCreateSz(&pDesc, v8);
    TlgCreateWsz(&v22, (LPCWSTR)(v9 + 1356));
    TlgCreateWsz(&v23, (LPCWSTR)(v10 + 1612));
    v12 = v11[468];
    v24 = &v13;
    v14 = v11[467];
    v26 = &v14;
    v15 = v11[469];
    v28 = &v15;
    v16 = v11[470];
    v30 = &v16;
    v13 = v12;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2608, 0LL, 0LL, 0xAu, &pData);
  }
}
