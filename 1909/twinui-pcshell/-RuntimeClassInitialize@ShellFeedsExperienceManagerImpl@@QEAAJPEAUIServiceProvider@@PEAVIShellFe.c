/*
 * XREFs of ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800947E8
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z @ 0x180094728 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ?_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094C88 (-_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800950BC (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180095D10 (-_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x18009B3C0 (--$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFe.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x18009FDA8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::RuntimeClassInitialize(
        ShellFeedsExperienceManagerImpl *this,
        struct IServiceProvider *a2,
        __int64 (__fastcall ***a3)(struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *, GUID *, __int64 *))
{
  __int64 (__fastcall *v6)(struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int ShellExperienceView; // ebx
  __int64 v9; // rdx
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rdi
  __int64 *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *v16; // [rsp+40h] [rbp+8h] BYREF
  struct IServiceProvider *v17; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  v6 = **a3;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)this + 10);
  ShellExperienceView = v6(
                          (struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *)a3,
                          &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e,
                          v7);
  if ( ShellExperienceView < 0 )
  {
    v9 = 211LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    return (unsigned int)ShellExperienceView;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  v16 = (struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *)a3;
  v17 = a2;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled() )
  {
    v11 = Microsoft::WRL::Details::MakeAndInitialize<ShellFeedsDesktopExperienceView,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IServiceProvider * &,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification * &>(
            (char *)this + 72,
            &v17,
            &v16);
    ShellExperienceView = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x570,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    ShellExperienceView = -2147467259;
  }
  if ( ShellExperienceView < 0 )
  {
    v9 = 213LL;
    goto LABEL_3;
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 9);
  v13 = **v12;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  ShellExperienceView = v13(v12, &GUID_10e014a2_a194_445e_9cb0_667ae070d5d9, (char *)this + 88);
  if ( ShellExperienceView < 0 )
  {
    v9 = 214LL;
    goto LABEL_3;
  }
  ShellExperienceView = ShellFeedsExperienceManagerImpl::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v9 = 216LL;
    goto LABEL_3;
  }
  ShellExperienceView = ShellFeedsExperienceManagerImpl::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v9 = 217LL;
    goto LABEL_3;
  }
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)this + 7);
  ShellExperienceView = ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
                          this,
                          (const struct _GUID *)&SID_IImmersiveMonitorService,
                          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                          (void **)v14);
  if ( ShellExperienceView < 0 )
  {
    v9 = 219LL;
    goto LABEL_3;
  }
  ShellExperienceView = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 7) + 24LL))(
                          *((_QWORD *)this + 7),
                          (char *)this + 16,
                          (char *)this + 64);
  if ( ShellExperienceView < 0 )
  {
    v9 = 220LL;
    goto LABEL_3;
  }
  return 0LL;
}
