/*
 * XREFs of ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00B0C50
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00B09B8 (RIMEnumerateDevicesForTelemetry.c)
 *     _lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_ @ 0x1C0131EA0 (_lambda_3346b6da4304b6cf0870d144c3e6654c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 */

void __fastcall InputTraceLogging::RIM::RawInputManagerObject(const struct RawInputManagerObject *a1)
{
  __int64 v1; // r9
  int v2; // r10d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const CHAR *v10; // rdx
  __int64 v11; // r9
  int v12; // ecx
  char v13; // cf
  __int64 v14; // r10
  int v15; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+34h] [rbp-55h] BYREF
  int v17; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  int *v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  int *v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]
  __int64 v27; // [rsp+B0h] [rbp+27h]
  __int64 v28; // [rsp+B8h] [rbp+2Fh]
  int *v29; // [rsp+C0h] [rbp+37h]
  __int64 v30; // [rsp+C8h] [rbp+3Fh]

  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
  {
    v3 = *(_DWORD *)(v1 + 84);
    v18 = v1;
    v20 = &v18;
    v21 = 8LL;
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          v7 = v6 - v2;
          if ( v7 )
          {
            v8 = v7 - 8;
            if ( v8 )
            {
              v9 = v8 - 16;
              if ( v9 )
              {
                if ( v9 == 28 )
                  v10 = "AllHid";
                else
                  v10 = "UNKNOWN";
              }
              else
              {
                v10 = "GenericHid";
              }
            }
            else
            {
              v10 = "Touch";
            }
          }
          else
          {
            v10 = "Touchpad";
          }
        }
        else
        {
          v10 = "Pen";
        }
      }
      else
      {
        v10 = "Keyboard";
      }
    }
    else
    {
      v10 = "Mouse";
    }
    TlgCreateSz(&pDesc, v10);
    v12 = *(unsigned __int8 *)(v11 + 80);
    v23 = &v15;
    v16 = *(unsigned __int8 *)(v11 + 81);
    v25 = &v16;
    v27 = v11 + 864;
    v13 = *(_DWORD *)(v11 + 884) & 1;
    v15 = v12;
    v24 = v14;
    v17 = -v13;
    v29 = &v17;
    v26 = v14;
    v28 = v14;
    v30 = v14;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E27C4, 0LL, 0LL, 8u, &pData);
  }
}
