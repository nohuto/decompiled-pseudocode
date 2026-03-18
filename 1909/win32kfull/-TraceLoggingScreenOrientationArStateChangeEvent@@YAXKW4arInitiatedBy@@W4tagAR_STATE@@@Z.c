/*
 * XREFs of ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C01CF160
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D5250 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void TraceLoggingScreenOrientationArStateChangeEvent()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-49h] BYREF
  int v3; // [rsp+34h] [rbp-45h] BYREF
  int v4; // [rsp+38h] [rbp-41h] BYREF
  int v5; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-9h]
  __int64 v9; // [rsp+78h] [rbp-1h]
  int *v10; // [rsp+80h] [rbp+7h]
  __int64 v11; // [rsp+88h] [rbp+Fh]
  int *v12; // [rsp+90h] [rbp+17h]
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  int *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  int *v16; // [rsp+B0h] [rbp+37h]
  __int64 v17; // [rsp+B8h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v6 = 0x1000000LL;
      v8 = &v6;
      v10 = &v2;
      v12 = &v3;
      v14 = &v4;
      v16 = &v5;
      v9 = 8LL;
      v2 = v1;
      v11 = 4LL;
      v3 = 0;
      v13 = 4LL;
      v4 = 0;
      v15 = 4LL;
      v5 = v0;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5D06, 0LL, 0LL, 7u, &pData);
    }
  }
}
