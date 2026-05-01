/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800410B8
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180017564 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x180017710 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180017850 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180017960 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801B7BB0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1801B888C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::GetMonitorInformation(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4,
        bool *a5,
        struct tagRECT *a6,
        HMONITOR *a7)
{
  int v9; // eax
  HRESULT v10; // ebx
  int v11; // eax
  HWND WindowW; // rax
  LANGID ThreadUILanguage; // ax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-61h]
  void *ppvOut; // [rsp+30h] [rbp-51h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-49h] BYREF
  __int128 v19; // [rsp+40h] [rbp-41h] BYREF
  int v20; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v22; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v23; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v21[1] = -2LL;
  v19 = 0uLL;
  *a3 = 0uLL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
  {
    v19 = 0uLL;
    *a6 = 0uLL;
  }
  if ( a7 )
    *a7 = 0LL;
  v21[0] = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, _QWORD *))(**((_QWORD **)this + 63) + 24LL))(
         *((_QWORD *)this + 63),
         &SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x339,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v16);
    goto LABEL_21;
  }
  punk = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, IUnknown **))(*(_QWORD *)v21[0] + 88LL))(v21[0], &punk);
  if ( v10 >= 0 )
  {
    *(_QWORD *)&v19 = 0LL;
    if ( !a7 || (v10 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[1].Release)(punk, &v19), v10 >= 0) )
    {
      ppvOut = 0LL;
      v10 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      if ( v10 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v20);
        v10 = v11;
        if ( v11 < 0 )
        {
          v15 = 842LL;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 112LL))(ppvOut, &v23);
          v10 = v11;
          if ( v11 < 0 )
          {
            v15 = 844LL;
          }
          else
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
            {
              v11 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v22);
              v10 = v11;
              if ( v11 >= 0 )
                goto LABEL_14;
              v15 = 851LL;
            }
            else
            {
              v11 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v22);
              v10 = v11;
              if ( v11 >= 0 )
              {
LABEL_14:
                *a3 = v22;
                *(_DWORD *)a4 = v20;
                ThreadUILanguage = GetThreadUILanguage();
                *a5 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
                if ( a6 )
                  *a6 = v23;
                if ( a7 )
                  *a7 = (HMONITOR)v19;
                v10 = 0;
                goto LABEL_19;
              }
              v15 = 855LL;
            }
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v11,
          v16);
      }
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  return (unsigned int)v10;
}
