/*
 * XREFs of ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x18033D514
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x18033BF60 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 *     ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x18033D380 (-CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B0F4B (memcmp_0.c)
 */

bool __fastcall SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(HSTRING string, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  PCWSTR v4; // rax
  UINT32 length; // [rsp+20h] [rbp-28h] BYREF
  GUID pclsid; // [rsp+28h] [rbp-20h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  if ( length < 0x20 || memcmp_0(StringRawBuffer, L"Microsoft.Explorer.Notification.", 0x40uLL) )
    return 0;
  v4 = WindowsGetStringRawBuffer(string, 0LL);
  return CLSIDFromString(v4 + 32, &pclsid) >= 0;
}
