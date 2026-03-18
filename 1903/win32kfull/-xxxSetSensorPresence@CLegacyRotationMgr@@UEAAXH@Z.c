/*
 * XREFs of ?xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z @ 0x1C01D5A60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0131B8C (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall CLegacyRotationMgr::xxxSetSensorPresence(CLegacyRotationMgr *this, int a2)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v2 = a2;
  if ( (int)CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
  {
    dword_1C0327D7C = v2;
    if ( !dword_1C0327D9C )
      dword_1C0327D9C = v2 != 0;
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
      {
        v6 = 0;
        v4 = &v2;
        v5 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6D26, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
