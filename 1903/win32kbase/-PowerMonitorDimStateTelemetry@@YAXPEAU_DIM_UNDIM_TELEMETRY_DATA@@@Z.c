/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C00BCF4C
 * Callers:
 *     PowerUnDimMonitor @ 0x1C005B698 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C00623F8 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0108A3C (PowerDimMonitor.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(struct _DIM_UNDIM_TELEMETRY_DATA *a1)
{
  char v1; // al
  _BYTE *v2; // r9
  int v3; // r10d
  int v4; // r11d
  bool v5; // [rsp+30h] [rbp-79h] BYREF
  bool v6; // [rsp+31h] [rbp-78h] BYREF
  char v7; // [rsp+32h] [rbp-77h] BYREF
  char v8; // [rsp+33h] [rbp-76h] BYREF
  char v9; // [rsp+34h] [rbp-75h] BYREF
  int v10; // [rsp+38h] [rbp-71h] BYREF
  int v11; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v12; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  int *v16; // [rsp+80h] [rbp-29h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  bool *v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  bool *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  char *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  char *v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  char *v26; // [rsp+D0h] [rbp+27h]
  __int64 v27; // [rsp+D8h] [rbp+2Fh]
  int *v28; // [rsp+E0h] [rbp+37h]
  __int64 v29; // [rsp+E8h] [rbp+3Fh]

  if ( *(_DWORD *)a1 != 2 )
    goto LABEL_6;
  v1 = *((_BYTE *)a1 + 5);
  if ( *((_BYTE *)a1 + 4) )
  {
    if ( v1 )
      return;
LABEL_6:
    if ( !*(_DWORD *)a1 && *((_BYTE *)a1 + 4) && *((_BYTE *)a1 + 5) )
      return;
    goto LABEL_9;
  }
  if ( !v1 )
    return;
LABEL_9:
  if ( dword_1C020F458 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F458, 0x400000000100uLL) )
    {
      v14 = &v12;
      v16 = &v10;
      v5 = gProtocolType == (__int16)v4;
      v18 = &v5;
      v20 = &v6;
      v6 = gfSwitchInProgress != v4;
      v7 = v2[4];
      v22 = &v7;
      v8 = v2[5];
      v24 = &v8;
      v9 = v2[6];
      v26 = &v9;
      v11 = dword_1C0215780;
      v28 = &v11;
      v12 = 16779264LL;
      v15 = 8LL;
      v10 = v3;
      v17 = 4LL;
      v19 = 1LL;
      v21 = 1LL;
      v23 = 1LL;
      v25 = 1LL;
      v27 = 1LL;
      v29 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020F458, &unk_1C01E352A, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
