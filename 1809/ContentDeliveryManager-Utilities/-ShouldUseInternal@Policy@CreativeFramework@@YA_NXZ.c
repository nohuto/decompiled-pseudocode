/*
 * XREFs of ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x18009D75C
 * Callers:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x18009D898 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x18009D9F8 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x180026040 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x18009D604 (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 *     _Init_thread_footer @ 0x1800C6F78 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C6FE8 (_Init_thread_header.c)
 */

char __fastcall CreativeFramework::Policy::ShouldUseInternal(CreativeFramework::Policy *this)
{
  char v1; // bl
  ContentDeliveryManager::AccountTokens *v2; // rcx
  const unsigned __int16 *v4; // r9
  int SettingValue; // eax
  char v6; // al
  unsigned int *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockShared(&stru_180185180);
  v1 = 0;
  if ( !byte_1801850EC )
  {
    ReleaseSRWLockShared(&stru_180185180);
    AcquireSRWLockExclusive(&stru_180185180);
    if ( byte_1801850EC )
    {
      v1 = byte_1801850ED;
LABEL_10:
      ReleaseSRWLockExclusive(&stru_180185180);
      return v1;
    }
    v2 = (ContentDeliveryManager::AccountTokens *)(unsigned int)tls_index;
    if ( __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL)
      || (Init_thread_header(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA),
          __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA != -1) )
    {
LABEL_5:
      if ( !`CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled
        && ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUserCached(v2) )
      {
        v1 = 1;
      }
      byte_1801850ED = v1;
      byte_1801850EC = 1;
      goto LABEL_10;
    }
    SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                     (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                     (const WCHAR *)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                     L"ContentDeliveryAllowedOverride",
                     v4,
                     &v9,
                     v7);
    if ( SettingValue >= 0 )
    {
      if ( v9 )
      {
        v6 = 1;
        if ( v9 != 1 )
          goto LABEL_12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)SettingValue);
    }
    v6 = 0;
LABEL_12:
    `CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled = v6;
    Init_thread_footer(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA);
    goto LABEL_5;
  }
  v1 = byte_1801850ED;
  ReleaseSRWLockShared(&stru_180185180);
  return v1;
}
