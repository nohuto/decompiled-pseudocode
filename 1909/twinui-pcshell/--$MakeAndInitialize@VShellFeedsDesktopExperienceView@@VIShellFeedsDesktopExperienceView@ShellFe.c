/*
 * XREFs of ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x18009B3C0
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800947E8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F6B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008F3A4 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0ShellFeedsDesktopExperienceView@@QEAA@XZ @ 0x18009BB4C (--0ShellFeedsDesktopExperienceView@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@UIWeakReferenceSource@@VIShellFeedsDesktopExperienceView@67@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@7@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009C144 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VIShell.c)
 *     ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009F3E4 (-RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellFeedsDesktopExperienceView,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IServiceProvider * &,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification * &>(
        ShellFeedsDesktopExperienceView **a1,
        struct IServiceProvider **a2,
        struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification **a3)
{
  void *v6; // rax
  int CanCastTo; // edi
  ShellFeedsDesktopExperienceView *v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  ShellFeedsDesktopExperienceView *v13; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  if ( v6 )
  {
    v8 = ShellFeedsDesktopExperienceView::ShellFeedsDesktopExperienceView((ShellFeedsDesktopExperienceView *)v6);
    v13 = v8;
    v12 = 0LL;
    CanCastTo = ShellFeedsDesktopExperienceView::RuntimeClassInitialize(v8, *a2, *a3);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_51d5421c_6190_4c6b_93bb_a45a990dddbe, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v8;
        (*(void (__fastcall **)(ShellFeedsDesktopExperienceView *))(*(_QWORD *)v8 + 8LL))(v8);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,IWeakReferenceSource,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
                      v8,
                      v10,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(ShellFeedsDesktopExperienceView *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release((__int64)v8);
  }
  else
  {
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)CanCastTo;
}
