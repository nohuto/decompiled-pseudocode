/*
 * XREFs of ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18000A41C
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18000EF30 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180026390 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003714 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
        const WCHAR *this,
        unsigned __int16 *a2,
        bool *a3)
{
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  hKey = 0LL;
  *(_BYTE *)a2 = 0;
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, this, 0, 0x20019u, &hKey);
  v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v6 = v5;
  if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -2147024894 )
  {
    *(_BYTE *)a2 = (v6 & 0x80000000) == 0;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xD8,
      (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
      (const char *)v6,
      (__int64)"RegKey: %ws",
      (const char *)this);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
