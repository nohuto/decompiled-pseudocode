/*
 * XREFs of ?_UnregisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180096428
 * Callers:
 *     ?_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800958E4 (-_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_RegisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180095E74 (-_RegisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@ShellFeedsExperienceManagerImpl@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180092648 (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@ShellFeedsE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_UnregisterViewPresentationChanged(
        ShellFeedsExperienceManagerImpl *this)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 16);
  if ( v1 )
  {
    *((_QWORD *)this + 16) = 0LL;
    v7 = 0LL;
    v2 = ShellFeedsExperienceManagerImpl::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64)this,
           &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 817LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      return v3;
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 88LL))(v7, v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 818LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return 0LL;
}
