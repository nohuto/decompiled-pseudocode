/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00B6E20
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00B6F64 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D52EC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D5514 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  int v2; // r9d
  int v3; // r9d
  _DWORD v4[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-39h] BYREF
  int *v6; // [rsp+60h] [rbp-19h]
  int v7; // [rsp+68h] [rbp-11h]
  int v8; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v9; // [rsp+70h] [rbp-9h]
  int v10; // [rsp+78h] [rbp-1h]
  int v11; // [rsp+7Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+7h] BYREF
  int *v13; // [rsp+A0h] [rbp+27h]
  int v14; // [rsp+A8h] [rbp+2Fh]
  int v15; // [rsp+ACh] [rbp+33h]

  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v15 = 0;
    v13 = &dword_1C0327D7C;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6C32, 0LL, 0LL, 3u, &pData);
  }
  v2 = (*(_DWORD *)(gpsi + 2236LL) >> 3) & 1;
  v4[0] = v2;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v8 = 0;
    v11 = 0;
    v6 = &dword_1C0327D84;
    v9 = v4;
    v7 = 4;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6C79, 0LL, 0LL, 4u, &v5);
    v2 = v4[0];
  }
  if ( dword_1C0327D84 && !v2 && !dword_1C0327D80 )
  {
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
    v2 = v4[0];
  }
  dword_1C0327D84 = v2;
  v3 = (*(_DWORD *)(gpsi + 2236LL) >> 4) & 1;
  v4[0] = v3;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v8 = 0;
    v11 = 0;
    v6 = &dword_1C0327D80;
    v9 = v4;
    v7 = 4;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6CD2, 0LL, 0LL, 4u, &v5);
    v3 = v4[0];
  }
  if ( dword_1C0327D80 && !v3 && !dword_1C0327D84 )
  {
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
    v3 = v4[0];
  }
  dword_1C0327D80 = v3;
  if ( dword_1C0327D84 || v3 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
