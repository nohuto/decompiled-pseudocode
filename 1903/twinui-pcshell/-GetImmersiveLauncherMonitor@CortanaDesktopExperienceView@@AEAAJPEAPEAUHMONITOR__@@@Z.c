/*
 * XREFs of ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180055E58
 * Callers:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180055CC4 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1801CF688 (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180041524 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(
        CortanaDesktopExperienceView *this,
        HMONITOR *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v14);
    return v5;
  }
  v17 = 0LL;
  v6 = *((_QWORD *)this + 15);
  v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v8 = v7(v6, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v17);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8,
      v14);
    goto LABEL_7;
  }
  v16 = 0LL;
  v9 = v17;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v11 = v10(v9, &v16);
  v5 = v11;
  if ( v11 < 0 )
  {
    v13 = 2000LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11,
      v14);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v16 + 40LL))(v16, a2);
  v5 = v11;
  if ( v11 < 0 )
  {
    v13 = 2001LL;
    goto LABEL_13;
  }
  v5 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v5;
}
