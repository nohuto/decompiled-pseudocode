/*
 * XREFs of ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180051E4C
 * Callers:
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800528D0 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801CEE70 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801CF9E0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180041524 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::UnregisterGlobalBackButton(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, SID *, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 67) )
    return 0LL;
  v2 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      v9);
  }
  else
  {
    v11 = 0LL;
    v4 = *((_QWORD *)this + 15);
    v5 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = v5(v4, &SID_ShellTargetingTracker, &GUID_c59a546b_412b_40f3_b151_9b3202e2835f, &v11);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 1726LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 67));
      v3 = v6;
      if ( v6 >= 0 )
      {
        *((_DWORD *)this + 67) = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        return 0LL;
      }
      v8 = 1728LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return v3;
}
