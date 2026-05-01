/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@UIWeakReferenceSource@@VIShellFeedsDesktopExperienceView@67@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@7@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009C144
 * Callers:
 *     ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x18009B3C0 (--$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFe.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009F170 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18009F170.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009C0D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00VIShellFeedsDesktopExpe.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,IWeakReferenceSource,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
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

  if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_10e014a2_a194_445e_9cb0_667ae070d5d9)
      || InlineIsEqualGUID(v6, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
