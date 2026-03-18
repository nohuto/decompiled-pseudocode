/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01BB054
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00DAC74 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01C1374 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01C1460 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingScreenOrientationChangeEvent(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+34h] [rbp-25h] BYREF
  int v8; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]
  int v18; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a3;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v6 = v5;
      v10 = &v6;
      v12 = &v7;
      v14 = &v18;
      v16 = &v8;
      v11 = 4LL;
      v7 = v4;
      v13 = 4LL;
      v15 = 4LL;
      v8 = v3;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D4313, 0LL, 0LL, 6u, &pData);
    }
  }
}
