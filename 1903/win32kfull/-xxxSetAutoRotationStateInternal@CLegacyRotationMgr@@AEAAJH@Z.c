/*
 * XREFs of ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01D5944
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D4F10 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D52EC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D5514 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z @ 0x1C01D5910 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0131880 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0131B8C (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSetAutoRotationStateInternal(CLegacyRotationMgr *this, int a2)
{
  int updated; // edi
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C0327D78 = a2;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v10 = 0;
      v6 = 0;
      v13 = 0;
      v8 = &dword_1C0327D78;
      v11 = &v6;
      v9 = 4;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6B9D, 0LL, 0LL, 4u, &pData);
    }
    if ( !dword_1C0327D78 )
      CLegacyRotationMgr::CacheRotationInfo(this);
  }
  return (unsigned int)updated;
}
