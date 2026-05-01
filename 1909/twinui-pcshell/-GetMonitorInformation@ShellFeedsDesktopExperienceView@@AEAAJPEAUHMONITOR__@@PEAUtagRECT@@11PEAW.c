/*
 * XREFs of ?GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18009CF5C
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EE24 (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180045560 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009C640 (-EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsDesktopExperienceView::GetMonitorInformation(
        ShellFeedsDesktopExperienceView *this,
        HMONITOR a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum EDGEUI_TRAYSTUCKPLACE *a6,
        bool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, SID *, GUID *, __int64); // rbx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HMONITOR, SID *, GUID *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // r8d
  int v23; // r9d
  __int64 *v25; // [rsp+20h] [rbp-A1h]
  __int64 v26[2]; // [rsp+30h] [rbp-91h] BYREF
  struct tagRECT v27; // [rsp+40h] [rbp-81h]
  __int64 v28; // [rsp+50h] [rbp-71h] BYREF
  RECT rcWork; // [rsp+58h] [rbp-69h]
  struct tagRECT *v30; // [rsp+68h] [rbp-59h]
  __int64 v31; // [rsp+70h] [rbp-51h]
  struct tagRECT v32; // [rsp+80h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v31 = -2LL;
  v30 = a5;
  v11 = ShellFeedsDesktopExperienceView::EnsureImmersiveShell(this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v28 = 0LL;
    v13 = *((_QWORD *)this + 11);
    v14 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64))(*(_QWORD *)v13 + 24LL);
    v15 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64)&v28);
    v16 = v14(v13, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v15);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v16);
LABEL_29:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      return v12;
    }
    v26[0] = 0LL;
    v17 = v28;
    v18 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(*(_QWORD *)v28 + 72LL);
    v25 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(v26);
    v19 = v18(v17, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v25);
    v12 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v26[0] + 80LL))(v26[0], a6);
      v12 = v19;
      if ( v19 >= 0 )
      {
        mi.cbSize = 40;
        memset_0(&mi.rcMonitor, 0, 0x24uLL);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          v21 = 2147549183LL;
          v20 = 1152LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
            (const char *)v21);
LABEL_28:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
          goto LABEL_29;
        }
        *a3 = mi.rcMonitor;
        *a7 = mi.dwFlags == 1;
        v19 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v26[0] + 112LL))(v26[0], &v32);
        v12 = v19;
        if ( v19 >= 0 )
        {
          v22 = v32.right - v32.left;
          v23 = v32.bottom - v32.top;
          v27 = v32;
          rcWork = mi.rcWork;
          if ( *(_DWORD *)a6 )
          {
            if ( *(_DWORD *)a6 == 1 )
            {
              if ( v32.top < mi.rcMonitor.top )
              {
                v27.top = mi.rcMonitor.top;
                v27.bottom = v23 + mi.rcMonitor.top;
                rcWork.top = v23 + mi.rcMonitor.top;
              }
            }
            else if ( *(_DWORD *)a6 == 2 )
            {
              if ( v32.right > mi.rcMonitor.right )
              {
                v27.right = mi.rcMonitor.right;
                v27.left = mi.rcMonitor.right - v22;
                rcWork.right = mi.rcMonitor.right - v22;
              }
            }
            else if ( *(_DWORD *)a6 == 3 && v32.bottom > mi.rcMonitor.bottom )
            {
              v27.bottom = mi.rcMonitor.bottom;
              v27.top = mi.rcMonitor.bottom - v23;
              rcWork.bottom = mi.rcMonitor.bottom - v23;
            }
          }
          else if ( v32.left < mi.rcMonitor.left )
          {
            v27.left = mi.rcMonitor.left;
            v27.right = v22 + mi.rcMonitor.left;
            rcWork.left = v22 + mi.rcMonitor.left;
          }
          *a4 = rcWork;
          *v30 = v27;
          v12 = 0;
          goto LABEL_28;
        }
        v20 = 1159LL;
      }
      else
      {
        v20 = 1149LL;
      }
    }
    else
    {
      v20 = 1148LL;
    }
    v21 = (unsigned int)v19;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x478,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
