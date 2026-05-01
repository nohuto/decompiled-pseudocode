/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180014684
 * Callers:
 *     ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800145F0 (-QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B956C (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BC800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801BC800.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800146F8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActiveZBandNotificati.c)
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046, a3, a4) )
  {
    *v5 = v6;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270, v5, 0LL)
      || (unsigned int)InlineIsEqualGUID(v7, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, v8, v9) )
    {
      *v8 = v10;
    }
    else
    {
      LODWORD(v9) = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
                      v10 + 8,
                      v11);
    }
    return (unsigned int)v9;
  }
}
