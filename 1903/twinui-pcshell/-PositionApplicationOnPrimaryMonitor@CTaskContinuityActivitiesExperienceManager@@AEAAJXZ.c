/*
 * XREFs of ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1801838B0
 * Callers:
 *     ?OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180183830 (-OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180183870 (-OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18004CDD4 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18004E1D8 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::PositionApplicationOnPrimaryMonitor(
        CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, IUnknown **); // rdi
  int v8; // eax
  __int64 v9; // rdx
  HWND WindowW; // rax
  HRESULT v11; // eax
  __int64 v12; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v16[1] = -2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v16[0] = 0LL;
    v2 = *((_QWORD *)this + 34);
    v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    v4 = v3(v2, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, v16);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
      return v5;
    }
    punk = 0LL;
    v6 = v16[0];
    v7 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v16[0] + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v8 = v7(v6, &punk);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 244LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_21;
    }
    *(_QWORD *)&v17.left = 0LL;
    *(_QWORD *)&v17.right = 0LL;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v11 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 251LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_21:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        goto LABEL_22;
      }
      v11 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v17);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 252LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v17);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 256LL;
        goto LABEL_20;
      }
    }
    v8 = CSingleViewShellExperience::SetPosition(
           (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
           &v17);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 259LL;
      goto LABEL_20;
    }
    v8 = CSingleViewShellExperience::ShowBorder((__int64)this + 72, 0, 3LL, 0LL, 0);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 260LL;
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  }
  return 0LL;
}
