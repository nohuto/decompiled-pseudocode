/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C010C420
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0058454 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z @ 0x1C010C564 (-QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z.c)
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C010C864 (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall CLegacyRotationMgr::xxxUserReinitializeAutoRotation(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v2; // rcx
  CLegacyRotationMgr *v3; // rcx
  unsigned int AutoRotationRegistrySetting; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  int v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  int *v12; // [rsp+70h] [rbp-28h]
  __int64 v13; // [rsp+78h] [rbp-20h]

  dword_1C0325D78 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      this,
                      L"Enable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v8 = 1;
    v10 = &dword_1C0325D78;
    v11 = 4LL;
    v12 = &v8;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E615D, 0LL, 0LL, 4u, &pData);
  }
  dword_1C0325DA8 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      v2,
                      L"SlateEnable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  AutoRotationRegistrySetting = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                                  v3,
                                  L"SensorPresent",
                                  0,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C0325D7C = AutoRotationRegistrySetting == 1;
  v5 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(AutoRotationRegistrySetting == 1),
         L"LastAutoRequest",
         0xFFFFFFFF,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  v6 = v5;
  if ( v5 > 3 )
    v6 = 0;
  gAutoRotationInfo = v6;
  dword_1C0325D98 = v5 != -1;
  v7 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(v5 != -1),
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v7 > 3 )
    v7 = 0;
  dword_1C0325D74 = v7;
  dword_1C0325D88 = IsNativeOrientationPortrait();
  dword_1C0325D8C = 0;
  CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
