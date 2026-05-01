/*
 * XREFs of ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x18007E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800153D8 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180022540 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180043BC4 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007E798 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007E7E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18007E7E4.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18007E830 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r15
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  _OWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  _OWORD *v10; // rax
  _OWORD *v11; // rbx
  _OWORD *v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h]
  __int128 v19; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CortanaDesktopExperienceView::SetExplicitDimissEnabled((CortanaDesktopExperienceView *)a1, 0);
  v4 = (_QWORD *)(a1 + 168);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(a1 + 168), a2);
  LODWORD(v17) = 0;
  *(_QWORD *)&v18 = a1;
  *((_QWORD *)&v18 + 1) = CortanaDesktopExperienceView::OnViewChanged;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>(v5);
    v6[1] = v18;
    *((_QWORD *)v6 + 4) = v17;
    *(_QWORD *)v6 = off_18044AF50;
    v7 = v6;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, v7, a1 + 176);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
    if ( !v7 )
      return v9;
LABEL_16:
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    return v9;
  }
  LODWORD(v17) = 0;
  *(_QWORD *)&v19 = a1;
  *((_QWORD *)&v19 + 1) = CortanaDesktopExperienceView::OnViewEvent;
  v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v12 = 0LL;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(v10);
    v11[1] = v19;
    *((_QWORD *)v11 + 4) = v17;
    *(_QWORD *)v11 = off_18044AF00;
    v12 = v11;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64))(*(_QWORD *)*v4 + 168LL))(*v4, v12, a1 + 184);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
    if ( !v12 )
      goto LABEL_20;
    goto LABEL_19;
  }
  CortanaDesktopExperienceView::OnViewPropertiesChanging((CortanaDesktopExperienceView *)a1);
  v14 = CortanaDesktopExperienceView::EnsureInputHostManager((CortanaDesktopExperienceView *)a1);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
    if ( !v12 )
    {
LABEL_20:
      if ( !v7 )
        return v9;
      goto LABEL_16;
    }
LABEL_19:
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    goto LABEL_20;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 128) + 24LL))(
          *(_QWORD *)(a1 + 128),
          a1 + 56,
          a1 + 272);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v15);
  if ( v12 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
