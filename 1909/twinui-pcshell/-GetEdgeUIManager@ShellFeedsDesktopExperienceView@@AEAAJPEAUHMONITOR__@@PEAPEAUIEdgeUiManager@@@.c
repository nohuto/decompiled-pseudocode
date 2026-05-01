/*
 * XREFs of ?GetEdgeUIManager@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x18009CDD4
 * Callers:
 *     ?GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18009D21C (-GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@.c)
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180045560 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009C640 (-EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::GetEdgeUIManager(
        ShellFeedsDesktopExperienceView *this,
        HMONITOR a2,
        struct IEdgeUiManager **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, __int64); // rbx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = ShellFeedsDesktopExperienceView::EnsureImmersiveShell(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v8 = *((_QWORD *)this + 11);
    v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64))(*(_QWORD *)v8 + 24LL);
    v10 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64)&v15);
    v11 = v9(v8, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v10);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, struct IEdgeUiManager **))(*(_QWORD *)v15 + 72LL))(
              v15,
              a2,
              &SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              a3);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v12 = 891LL;
    }
    else
    {
      v12 = 890LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    return v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x378,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
