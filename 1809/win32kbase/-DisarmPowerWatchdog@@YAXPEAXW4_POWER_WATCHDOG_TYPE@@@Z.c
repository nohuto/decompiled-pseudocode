/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0097168
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0097530 (PowerOnMonitor.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0x @ 0x1C00EB524 (McTemplateK0x.c)
 */

void __fastcall DisarmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // [rsp+30h] [rbp-79h] BYREF
  int v7; // [rsp+34h] [rbp-75h] BYREF
  __int64 v8; // [rsp+38h] [rbp-71h] BYREF
  _QWORD InputBuffer[12]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  char *v11; // [rsp+C0h] [rbp+17h]
  int v12; // [rsp+C8h] [rbp+1Fh]
  int v13; // [rsp+CCh] [rbp+23h]
  __int64 *v14; // [rsp+D0h] [rbp+27h]
  int v15; // [rsp+D8h] [rbp+2Fh]
  int v16; // [rsp+DCh] [rbp+33h]
  int *v17; // [rsp+E0h] [rbp+37h]
  int v18; // [rsp+E8h] [rbp+3Fh]
  int v19; // [rsp+ECh] [rbp+43h]

  if ( a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0x(v4, &StopPowerWatchdog, v5, a1);
    if ( dword_1C01C3348 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C3348, 0x400000000000uLL) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v11 = &v6;
        v14 = &v8;
        v17 = &v7;
        v6 = 0;
        v12 = 1;
        v8 = a1;
        v15 = 8;
        v7 = a2;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C3348, &unk_1C019D6CE, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
