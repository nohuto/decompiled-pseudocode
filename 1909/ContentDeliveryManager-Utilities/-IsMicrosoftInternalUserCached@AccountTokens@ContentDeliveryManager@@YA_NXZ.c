/*
 * XREFs of ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800A13F0
 * Callers:
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800A1548 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z @ 0x18000A464 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024328 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x1800280FC (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x18009FE94 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 */

bool __fastcall ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUserCached(
        ContentDeliveryManager::AccountTokens *this)
{
  bool v1; // bl
  const wchar_t *v3; // r8
  int StringSetting; // eax
  CreativeFramework::Policy *v5; // rcx
  void *v6; // rbx
  bool IsAnyMicrosoftDomainAccount; // di
  const unsigned __int16 *v8; // r9
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
  if ( ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized )
  {
    v1 = ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount;
    ReleaseSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
    return v1;
  }
  ReleaseSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
  AcquireSRWLockExclusive(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
  if ( !ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized )
  {
    pv = 0LL;
    StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
                      L"IdentityProvider",
                      v3,
                      &pv);
    v6 = pv;
    if ( StringSetting >= 0 )
    {
      if ( pv && CompareStringOrdinal((LPCWCH)pv, -1, L"{ED4515F3-DA33-4717-9228-3D8668614BE6}", -1, 1) == 2 )
      {
        IsAnyMicrosoftDomainAccount = 0;
LABEL_9:
        if ( v6 )
          CoTaskMemFree(v6);
        ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount = IsAnyMicrosoftDomainAccount;
        ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized = 1;
        goto LABEL_16;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x209,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanageraccounttokenprovider.h",
        (const char *)(unsigned int)StringSetting);
    }
    IsAnyMicrosoftDomainAccount = CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v5);
    if ( !IsAnyMicrosoftDomainAccount )
    {
      v9 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
             L"IdentityProvider",
             L"{ED4515F3-DA33-4717-9228-3D8668614BE6}",
             v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x217,
          (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanageraccounttokenprovider.h",
          (const char *)(unsigned int)v9);
    }
    goto LABEL_9;
  }
  IsAnyMicrosoftDomainAccount = ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount;
LABEL_16:
  ReleaseSRWLockExclusive(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
  return IsAnyMicrosoftDomainAccount;
}
