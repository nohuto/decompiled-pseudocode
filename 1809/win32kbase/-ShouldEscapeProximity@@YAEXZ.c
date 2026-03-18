/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C00E1CA8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  char v5; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-4Dh] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  __int64 v10; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  char *v12; // [rsp+70h] [rbp-19h]
  int v13; // [rsp+78h] [rbp-11h]
  int v14; // [rsp+7Ch] [rbp-Dh]
  __int64 *v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+8Ch] [rbp+3h]
  unsigned int *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  unsigned int *v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+ACh] [rbp+23h]
  unsigned int *v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+BCh] [rbp+33h]
  unsigned __int64 *v27; // [rsp+C0h] [rbp+37h]
  int v28; // [rsp+C8h] [rbp+3Fh]
  int v29; // [rsp+CCh] [rbp+43h]

  v3 = MEMORY[0xFFFFF78000000008];
  v10 = -1LL;
  ++gProximityPowerPressCount;
  v9 = MEMORY[0xFFFFF78000000008];
  v5 = 0;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    if ( MEMORY[0xFFFFF78000000008] <= gProximityLastPowerPressTime )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v3 = v9;
    }
    v10 = v3 - gProximityLastPowerPressTime;
    if ( v3 - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      v5 = 1;
    }
  }
  if ( dword_1C01C3348 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C3348, 0x400000000000uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v12 = &v5;
    v15 = &v10;
    v6 = gProximityPowerPressCount;
    v18 = &v6;
    v7 = gProximityScenarioCount;
    v21 = &v7;
    v8 = gProximityEscapeCount;
    v24 = &v8;
    v27 = &v9;
    v13 = 1;
    v16 = 8;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v28 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C3348, &unk_1C019D666, 0LL, 0LL, 8u, &pData);
    v3 = v9;
  }
  gProximityLastPowerPressTime = v3;
  return v5;
}
