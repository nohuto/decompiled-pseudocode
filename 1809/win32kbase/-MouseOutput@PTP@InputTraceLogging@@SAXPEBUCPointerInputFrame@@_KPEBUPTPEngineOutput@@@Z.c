/*
 * XREFs of ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C014AE28
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 */

void __fastcall InputTraceLogging::PTP::MouseOutput(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct PTPEngineOutput *a3)
{
  int v4; // eax
  int v5; // edx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  const CHAR *v14; // rdx
  __int64 v15; // r11
  int v16; // ecx
  int v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+34h] [rbp-75h] BYREF
  int v19; // [rsp+38h] [rbp-71h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h] BYREF
  __int64 v22; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-29h]
  int v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v27; // [rsp+90h] [rbp-19h]
  int v28; // [rsp+98h] [rbp-11h]
  int v29; // [rsp+9Ch] [rbp-Dh]
  int *v30; // [rsp+A0h] [rbp-9h]
  int v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+ACh] [rbp+3h]
  __int64 *v33; // [rsp+B0h] [rbp+7h]
  int v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+BCh] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+17h] BYREF
  int *v37; // [rsp+D0h] [rbp+27h]
  int v38; // [rsp+D8h] [rbp+2Fh]
  int v39; // [rsp+DCh] [rbp+33h]
  int *v40; // [rsp+E0h] [rbp+37h]
  int v41; // [rsp+E8h] [rbp+3Fh]
  int v42; // [rsp+ECh] [rbp+43h]

  if ( a1 )
    v4 = *((_DWORD *)a1 + 10);
  else
    v4 = 0;
  v17 = v4;
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x80uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v24 = &v20;
    v27 = &v21;
    v30 = &v17;
    v25 = v5 - 120;
    v28 = v5 - 120;
    v34 = v5 - 120;
    v9 = *(_DWORD *)(v8 + 4);
    v33 = &v22;
    v20 = v7;
    v21 = v6;
    v31 = 4;
    v22 = a2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
                v14 = "SetPosition";
              else
                v14 = "UNKNOWN";
            }
            else
            {
              v14 = "RightUp";
            }
          }
          else
          {
            v14 = "RightDown";
          }
        }
        else
        {
          v14 = "LeftUp";
        }
      }
      else
      {
        v14 = "LeftDown";
      }
    }
    else
    {
      v14 = "Move";
    }
    TlgCreateSz(&pDesc, v14);
    v39 = 0;
    v16 = *(_DWORD *)(v15 + 8);
    v42 = 0;
    v37 = &v18;
    v19 = *(_DWORD *)(v15 + 12);
    v40 = &v19;
    v18 = v16;
    v38 = 4;
    v41 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0CE6, 0LL, 0LL, 9u, &pData);
  }
}
