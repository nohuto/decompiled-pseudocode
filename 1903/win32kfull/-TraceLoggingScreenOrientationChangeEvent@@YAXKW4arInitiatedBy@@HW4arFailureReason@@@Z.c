/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01CF3EC
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00B6F64 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D52EC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D53E0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingScreenOrientationChangeEvent(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+34h] [rbp-45h] BYREF
  int v8; // [rsp+38h] [rbp-41h] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  int *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  int *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  int *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  int *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]
  int v21; // [rsp+F0h] [rbp+77h] BYREF

  v21 = a3;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v9 = 0x1000000LL;
      v11 = &v9;
      v13 = &v6;
      v15 = &v7;
      v17 = &v21;
      v19 = &v8;
      v12 = 8LL;
      v6 = v5;
      v14 = 4LL;
      v7 = v4;
      v16 = 4LL;
      v18 = 4LL;
      v8 = v3;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E67AA, 0LL, 0LL, 7u, &pData);
    }
  }
}
