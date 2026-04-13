/*
 * XREFs of ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18000A1C4
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18000EF30 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180026390 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180003750 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
        const WCHAR *this,
        LPCWSTR lpValueName,
        const unsigned __int16 *a3)
{
  const char *v5; // r9
  __int64 result; // rax
  const WCHAR *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = (int)a3;
  v5 = (const char *)(unsigned int)RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 4u, &v9, 4u);
  result = 0LL;
  if ( (_DWORD)v5 )
  {
    v7 = &Src;
    if ( lpValueName )
      v7 = lpValueName;
    return wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x62,
             (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
             v5,
             (__int64)"RegKey: %ws %ws",
             (const char *)this,
             v7);
  }
  return result;
}
