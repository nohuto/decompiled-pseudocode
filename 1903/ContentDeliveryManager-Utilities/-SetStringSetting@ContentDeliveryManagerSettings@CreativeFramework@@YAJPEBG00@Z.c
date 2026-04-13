/*
 * XREFs of ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z @ 0x18000A464
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18000F470 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002C300 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800A1260 (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800A14F4 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180003660 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
        const WCHAR *this,
        LPCWSTR lpValueName,
        _WORD *lpData,
        const unsigned __int16 *a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = -1LL;
  v6 = 0;
  do
    ++v4;
  while ( lpData[v4] );
  v8 = RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 1u, lpData, 2 * v4 + 2);
  if ( v8 )
    return (unsigned int)wil::details::in1diag3::Return_Win32Msg(
                           retaddr,
                           (void *)0xCA,
                           (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
                           (const char *)v8,
                           (__int64)"RegKey: %ws %ws",
                           (const char *)this,
                           lpValueName);
  return v6;
}
