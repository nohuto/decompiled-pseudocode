/*
 * XREFs of ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004D1E0
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180022540 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18004C570 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801EF0C0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180044858 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(
        CortanaDesktopExperienceView *this)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 255) )
    return 0LL;
  v3 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v11 = 0LL;
    v6 = *((_QWORD *)this + 15);
    v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8 = v7(v6, &IID_ILockScreenViewManager, &GUID_053bf212_5a22_4a75_87eb_dfca4ea90e02, &v11);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
      v4 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        return 0LL;
      }
      v5 = 1742LL;
    }
    else
    {
      v5 = 1740LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8,
      v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3,
      v9);
  }
  return v4;
}
