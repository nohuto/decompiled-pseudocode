/*
 * XREFs of ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800932C4
 * Callers:
 *     ?OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091B30 (-OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091B70 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180081550 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _lambda_2a565682f2cce7372cb732d8af640e68_::operator() @ 0x18008F560 (_lambda_2a565682f2cce7372cb732d8af640e68_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x18008FA04 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18008FFCC (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x1800909F8 (-IsFullscreenCXHRunning@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801BD000 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1801C1184 (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801C12BC (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  __int64 *v2; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  TaskbarHelpers *v13; // rax
  HMONITOR v14; // rdx
  HWND TrayWindowForMonitor; // rax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, void *, GUID *, IUnknown **); // rdi
  void *v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  IUnknown *pUnk; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-41h] BYREF
  WCHAR ClassName[56]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v23[2] = -2LL;
  v2 = (__int64 *)((char *)this + 432);
  *((_QWORD *)this + 54) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 55);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 1);
  }
  ForegroundWindow = GetForegroundWindow();
  if ( !GetClassNameW(ForegroundWindow, ClassName, 50)
    || CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) != 2
    && CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) != 2 )
  {
    if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                     *((ExperienceManagerUtils **)this + 12),
                                     v5) )
      return 0LL;
    LODWORD(pUnk) = 0;
    v23[0] = this;
    v23[1] = &pUnk;
    lambda_2a565682f2cce7372cb732d8af640e68_::operator()(v23);
    if ( (_DWORD)pUnk )
    {
      pUnk = 0LL;
      v6 = *((_QWORD *)this + 45);
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
      v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)&pUnk);
      v9 = v7(v6, &IID_IRealmActivationHistory, &GUID_67136e8b_6914_43f0_8f25_05619927d22e, v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 894LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
        return v10;
      }
      v9 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[1].QueryInterface)(pUnk, 0xFFFFLL);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 895LL;
        goto LABEL_13;
      }
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
      return 0LL;
    }
    if ( !IsUserOOBEOrCredentialReset() && !IsFullscreenCXHRunning() )
    {
      v13 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 376), 1u);
      TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v13, v14);
      if ( SetForegroundWindow(TrayWindowForMonitor) )
        return 0LL;
      v10 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39B,
        (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
        (const char *)0x80004005LL);
      return v10;
    }
    pUnk = 0LL;
    v16 = *((_QWORD *)this + 45);
    v17 = *(__int64 (__fastcall **)(__int64, void *, GUID *, IUnknown **))(*(_QWORD *)v16 + 24LL);
    v18 = &unk_1804813B0;
    if ( !IsCredentialReset() )
      v18 = &unk_1804813A0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
    v19 = v17(v16, v18, &GUID_8f352570_5bb7_4d72_921f_6fb3f2611c71, &pUnk);
    v20 = retaddr;
    if ( v19 >= 0 )
    {
      CoAllowSetForegroundWindow(pUnk, 0LL);
      v19 = ((__int64 (__fastcall *)(IUnknown *))pUnk->lpVtbl[1].Release)(pUnk);
      v20 = retaddr;
      if ( v19 >= 0 )
        goto LABEL_27;
      v21 = 906LL;
    }
    else
    {
      v21 = 903LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v20,
      (void *)v21,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_27;
  }
  CBaseTrayFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CBaseTrayFlyoutExperienceManager::DebounceDetection *)v2);
  return 0LL;
}
