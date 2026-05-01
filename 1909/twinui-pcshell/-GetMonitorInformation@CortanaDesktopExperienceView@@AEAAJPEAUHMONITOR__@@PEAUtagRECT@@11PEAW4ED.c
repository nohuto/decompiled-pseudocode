/*
 * XREFs of ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180043D70
 * Callers:
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180040CA0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180041304 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800499A8 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18007A7E0 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1801EEDB8 (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
  LPVOID *v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  HRESULT Instance; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  int ppv; // [rsp+20h] [rbp-91h]
  int v24[2]; // [rsp+30h] [rbp-81h] BYREF
  struct tagRECT v25; // [rsp+40h] [rbp-71h]
  _QWORD *v26; // [rsp+50h] [rbp-61h] BYREF
  RECT rcWork; // [rsp+58h] [rbp-59h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  struct tagRECT v29; // [rsp+70h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v28 = -2LL;
  *(_QWORD *)&v25.left = a7;
  v10 = (LPVOID *)((char *)this + 120);
  if ( *((_QWORD *)this + 15)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 120),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     v10),
        v11 = Instance,
        Instance >= 0) )
  {
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  if ( (v11 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9DB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v11,
      ppv);
    return v11;
  }
  v26 = 0LL;
  v12 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, _QWORD **))(*(_QWORD *)*v10 + 24LL))(
          *v10,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v26);
  v11 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)v24 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *))(*v26 + 72LL))(
            v26,
            a2,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    v11 = v13;
    if ( v13 < 0 )
    {
      v21 = 2527LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v24 + 80LL))(
              *(_QWORD *)v24,
              a6);
      v11 = v13;
      if ( v13 < 0 )
      {
        v21 = 2528LL;
      }
      else
      {
        mi.cbSize = 40;
        memset_0(&mi.rcMonitor, 0, 0x24uLL);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v11 = -2147418113;
          v22 = 2147549183LL;
          v21 = 2531LL;
LABEL_30:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)v22,
            (int)v24);
LABEL_16:
          v17 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 )
          {
            *(_QWORD *)v24 = 0LL;
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v14, v15, v16);
          }
          goto LABEL_18;
        }
        *a3 = mi.rcMonitor;
        **(_BYTE **)&v25.left = mi.dwFlags == 1;
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v24 + 112LL))(*(_QWORD *)v24, &v29);
        v11 = v13;
        if ( v13 >= 0 )
        {
          v14 = *(_QWORD *)&v29.right;
          v15 = (unsigned int)(v29.right - v29.left);
          v16 = (unsigned int)(v29.bottom - v29.top);
          v25 = v29;
          rcWork = mi.rcWork;
          if ( *(_DWORD *)a6 )
          {
            switch ( *(_DWORD *)a6 )
            {
              case 1:
                if ( v29.top < mi.rcMonitor.top )
                {
                  v25.top = mi.rcMonitor.top;
                  v25.bottom = v16 + mi.rcMonitor.top;
                  rcWork.top = v16 + mi.rcMonitor.top;
                }
                break;
              case 2:
                if ( v29.right > mi.rcMonitor.right )
                {
                  v25.right = mi.rcMonitor.right;
                  v25.left = mi.rcMonitor.right - v15;
                  rcWork.right = mi.rcMonitor.right - v15;
                }
                break;
              case 3:
                v14 = HIDWORD(*(_QWORD *)&v29.right);
                if ( v29.bottom > mi.rcMonitor.bottom )
                {
                  v25.bottom = mi.rcMonitor.bottom;
                  v25.top = mi.rcMonitor.bottom - v16;
                  rcWork.bottom = mi.rcMonitor.bottom - v16;
                }
                break;
            }
          }
          else if ( v29.left < mi.rcMonitor.left )
          {
            v25.left = mi.rcMonitor.left;
            v25.right = v15 + mi.rcMonitor.left;
            rcWork.left = v15 + mi.rcMonitor.left;
          }
          *a4 = rcWork;
          *a5 = v25;
          v11 = 0;
          goto LABEL_16;
        }
        v21 = 2538LL;
      }
    }
    v22 = (unsigned int)v13;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9DD,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v12,
    ppv);
LABEL_18:
  v18 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v18 + 16LL))(v18, *v18, v15, v16);
  }
  return v11;
}
