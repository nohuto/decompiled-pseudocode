/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001607C
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18000C3C0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000C8B0 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CDD0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800134FC (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076970 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18016AF50 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rbx
  int v10; // eax
  HRESULT v11; // ebx
  __int64 v12; // rbx
  int v13; // eax
  HWND WindowW; // rax
  LANGID ThreadUILanguage; // ax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-61h]
  void *ppvOut; // [rsp+30h] [rbp-51h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  __int128 v22; // [rsp+48h] [rbp-39h] BYREF
  int v23; // [rsp+58h] [rbp-29h] BYREF
  __int64 v24; // [rsp+60h] [rbp-21h]
  struct tagRECT v25; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v26; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v24 = -2LL;
  v22 = 0uLL;
  *a3 = 0uLL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
  {
    v22 = 0uLL;
    *a6 = 0uLL;
  }
  if ( a7 )
    *a7 = 0LL;
  v21 = 0LL;
  v9 = *((_QWORD *)this + 62);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v10 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
          v9,
          &SID_ImmersiveLauncher,
          &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
          &v21);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x300,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      v18);
    goto LABEL_21;
  }
  punk = 0LL;
  v12 = v21;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
  v11 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v12 + 88LL))(v12, &punk);
  if ( v11 >= 0 )
  {
    *(_QWORD *)&v22 = 0LL;
    if ( !a7 || (v11 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[1].Release)(punk, &v22), v11 >= 0) )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      v11 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      if ( v11 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v23);
        v11 = v13;
        if ( v13 < 0 )
        {
          v17 = 785LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 112LL))(ppvOut, &v26);
          v11 = v13;
          if ( v13 < 0 )
          {
            v17 = 787LL;
          }
          else
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
            {
              v13 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v25);
              v11 = v13;
              if ( v13 >= 0 )
                goto LABEL_14;
              v17 = 794LL;
            }
            else
            {
              v13 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v25);
              v11 = v13;
              if ( v13 >= 0 )
              {
LABEL_14:
                *a3 = v25;
                *(_DWORD *)a4 = v23;
                ThreadUILanguage = GetThreadUILanguage();
                *a5 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
                if ( a6 )
                  *a6 = v26;
                if ( a7 )
                  *a7 = (HMONITOR)v22;
                v11 = 0;
                goto LABEL_19;
              }
              v17 = 798LL;
            }
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v13,
          v18);
      }
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return (unsigned int)v11;
}
