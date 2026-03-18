/*
 * XREFs of ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01D5B38
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D4F10 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z @ 0x1C01D5910 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0131B8C (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSetSlateAutoRotationState(CLegacyRotationMgr *this, int a2)
{
  int updated; // edi
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SlateEnable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C0327DA8 = a2;
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
      {
        v8 = 0;
        v6 = &dword_1C0327DA8;
        v7 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6BE9, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  return (unsigned int)updated;
}
