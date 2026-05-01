/*
 * XREFs of ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180016558
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800113C0 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180014C40 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180079C7C (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800168E0 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetMonitorInformation(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum EDGEUI_TRAYSTUCKPLACE *a6,
        bool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // [rsp+20h] [rbp-91h]
  int v24[2]; // [rsp+30h] [rbp-81h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-79h] BYREF
  struct tagRECT v26; // [rsp+40h] [rbp-71h]
  RECT rcWork; // [rsp+50h] [rbp-61h]
  struct tagRECT *v28; // [rsp+60h] [rbp-51h]
  __int64 v29; // [rsp+68h] [rbp-49h]
  struct tagRECT v30; // [rsp+70h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v29 = -2LL;
  v28 = a5;
  v11 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11,
      v23);
    return v12;
  }
  v25 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, _QWORD **))(**((_QWORD **)this + 15) + 24LL))(
          *((_QWORD *)this + 15),
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v25);
  v12 = v13;
  if ( v13 >= 0 )
  {
    *(_QWORD *)v24 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *))(*v25 + 72LL))(
            v25,
            a2,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    v12 = v14;
    if ( v14 < 0 )
    {
      v21 = 2209LL;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v24 + 80LL))(
              *(_QWORD *)v24,
              a6);
      v12 = v14;
      if ( v14 < 0 )
      {
        v21 = 2210LL;
      }
      else
      {
        mi.cbSize = 40;
        memset_0(&mi.rcMonitor, 0, 0x24uLL);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          v22 = 2147549183LL;
          v21 = 2213LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)v22,
            (int)v24);
LABEL_14:
          v18 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 )
          {
            *(_QWORD *)v24 = 0LL;
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, v15, v16, v17);
          }
          goto LABEL_16;
        }
        *a3 = mi.rcMonitor;
        *a7 = mi.dwFlags == 1;
        v14 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v24 + 112LL))(*(_QWORD *)v24, &v30);
        v12 = v14;
        if ( v14 >= 0 )
        {
          v15 = *(_QWORD *)&v30.right;
          v16 = (unsigned int)(v30.right - v30.left);
          v17 = (unsigned int)(v30.bottom - v30.top);
          v26 = v30;
          rcWork = mi.rcWork;
          if ( *(_DWORD *)a6 )
          {
            switch ( *(_DWORD *)a6 )
            {
              case 1:
                if ( v30.top < mi.rcMonitor.top )
                {
                  v26.top = mi.rcMonitor.top;
                  v26.bottom = v17 + mi.rcMonitor.top;
                  rcWork.top = v17 + mi.rcMonitor.top;
                }
                break;
              case 2:
                if ( v30.right > mi.rcMonitor.right )
                {
                  v26.right = mi.rcMonitor.right;
                  v26.left = mi.rcMonitor.right - v16;
                  rcWork.right = mi.rcMonitor.right - v16;
                }
                break;
              case 3:
                v15 = HIDWORD(*(_QWORD *)&v30.right);
                if ( v30.bottom > mi.rcMonitor.bottom )
                {
                  v26.bottom = mi.rcMonitor.bottom;
                  v26.top = mi.rcMonitor.bottom - v17;
                  rcWork.bottom = mi.rcMonitor.bottom - v17;
                }
                break;
            }
          }
          else if ( v30.left < mi.rcMonitor.left )
          {
            v26.left = mi.rcMonitor.left;
            v26.right = v16 + mi.rcMonitor.left;
            rcWork.left = v16 + mi.rcMonitor.left;
          }
          *a4 = rcWork;
          *v28 = v26;
          v12 = 0;
          goto LABEL_14;
        }
        v21 = 2220LL;
      }
    }
    v22 = (unsigned int)v14;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89F,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v13,
    v23);
LABEL_16:
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v19 + 16LL))(v19, *v19, v16, v17);
  }
  return v12;
}
