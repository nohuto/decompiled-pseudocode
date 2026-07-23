/*
 * XREFs of PopDiagTraceMonitorOnWithLidClosed @ 0x140874548
 * Callers:
 *     PopMonitorInvocation @ 0x1406DD428 (PopMonitorInvocation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopDiagTraceMonitorOnWithLidClosed()
{
  int v0; // r9d
  char v1; // r10
  char v2; // r11
  char v3; // [rsp+30h] [rbp-39h] BYREF
  char v4; // [rsp+31h] [rbp-38h] BYREF
  char v5; // [rsp+32h] [rbp-37h] BYREF
  char v6; // [rsp+33h] [rbp-36h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  char *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  char *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  int *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  char *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  char *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  if ( !PopLidOpened && !PopConsoleExternalDisplayConnected && pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v6 = PopWdiCurrentScenarioInstanceId;
      v9 = &v3;
      v11 = &v4;
      v13 = &v7;
      v15 = &v5;
      v17 = &v6;
      v3 = v2;
      v4 = v2;
      v7 = v0;
      v5 = v1;
      v10 = 1LL;
      v12 = 1LL;
      v14 = 4LL;
      v16 = 1LL;
      v18 = 1LL;
      TlgWrite(&pCallbackContext, &unk_140370CA7, 0LL, 0LL, 7u, &pData);
    }
  }
}
