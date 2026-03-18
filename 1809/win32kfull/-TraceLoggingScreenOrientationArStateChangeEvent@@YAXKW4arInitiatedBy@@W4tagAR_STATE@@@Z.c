/*
 * XREFs of ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C01BAF74
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01C1460 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void TraceLoggingScreenOrientationArStateChangeEvent()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+34h] [rbp-25h] BYREF
  int v4; // [rsp+38h] [rbp-21h] BYREF
  int v5; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = v1;
      v7 = &v2;
      v9 = &v3;
      v11 = &v4;
      v13 = &v5;
      v8 = 4LL;
      v3 = 0;
      v10 = 4LL;
      v4 = 0;
      v12 = 4LL;
      v5 = v0;
      v14 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D42BF, 0LL, 0LL, 6u, &pData);
    }
  }
}
