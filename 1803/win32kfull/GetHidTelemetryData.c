/*
 * XREFs of GetHidTelemetryData @ 0x1C01B7508
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0107A6C (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C019881C (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     GetHidVidPidStrings @ 0x1C019AABC (GetHidVidPidStrings.c)
 */

void __fastcall GetHidTelemetryData(__int64 a1)
{
  __int64 v2; // rax
  struct tagRECT v3; // xmm6
  unsigned int v4; // esi
  struct tagRECT v5; // xmm7
  int v6; // edi
  __int64 v7; // r8
  int v8; // ecx
  int v9; // edx
  struct _UNICODE_STRING v10; // [rsp+48h] [rbp-39h] BYREF
  struct _UNICODE_STRING v11; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v12; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v13; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 v14[4]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v15; // [rsp+90h] [rbp+Fh]
  unsigned __int16 v16[4]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+1Fh]

  *(_DWORD *)&v11.Length = 0x100000;
  *(_QWORD *)v16 = 0LL;
  v17 = 0LL;
  *(_QWORD *)v14 = 0LL;
  v15 = 0LL;
  v11.Buffer = v16;
  v10.Buffer = v14;
  v2 = *(_QWORD *)(a1 + 480);
  *(_DWORD *)&v10.Length = 0x100000;
  v3 = *(struct tagRECT *)(v2 + 140);
  v4 = *(_DWORD *)(v2 + 680);
  v5 = *(struct tagRECT *)(v2 + 124);
  v6 = *(_DWORD *)(v2 + 24);
  GetHidVidPidStrings(a1, &v11, &v10);
  v7 = *(_QWORD *)(a1 + 480);
  v8 = 3;
  v9 = *(_DWORD *)(v7 + 24);
  if ( (unsigned int)(v9 - 5) > 1 )
  {
    if ( (unsigned int)(v9 - 1) > 3 )
    {
      if ( v9 == 7 )
      {
        v6 = *(_DWORD *)(v7 + 864);
        v8 = 5;
      }
      else
      {
        v8 = 1;
      }
    }
    else
    {
      v8 = 2;
    }
  }
  v12 = v3;
  v13 = v5;
  TraceLoggingHidConfigEvent(v8, v16, v14, v4, v6, &v13, &v12);
}
