/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIClosable@Foundation@8@UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801AC84C
 * Callers:
 *     ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801AB6AC (--$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B1520 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801B1520.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801AC7D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_1801AC7D8.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,IWeakReferenceSource,Windows::Foundation::IClosable,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_93acf1bc_b1c9_423a_9fa5_d80c0935ddee) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
