/*
 * XREFs of ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800590C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x18000EB7C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18001AEC4 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18005957C (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnShowWindowPolicy(
        CApplicationManager *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  int v5; // r14d
  RTL_SRWLOCK *v9; // rbx
  char v10; // r15
  CApplicationManager *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 *ViewPropertySetFromHintsForWin32; // rax
  HRESULT v16; // edi
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-50h]
  struct IApplicationView *v19; // [rsp+30h] [rbp-40h] BYREF
  IUnknown *v20; // [rsp+38h] [rbp-38h] BYREF
  void *v21; // [rsp+40h] [rbp-30h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  void *ppvOut; // [rsp+A8h] [rbp+38h] BYREF

  v24 = -2LL;
  v5 = (int)a4;
  *a4 = 0;
  v23 = 0uLL;
  *a5 = 0uLL;
  if ( (unsigned int)IsShellManagedWindow(a2) || !(unsigned int)GetWindowBand(a2, &a5) || (_DWORD)a5 != 1 )
    return 0LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
  CApplicationManager::_MonitorFromWindow(
    (CApplicationManager *)((char *)this - 368),
    a2,
    (struct IImmersiveMonitor **)&ppvOut);
  v18 = (int)ppvOut;
  v10 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(
          *((_QWORD *)this + 21),
          a2,
          (unsigned int)a5,
          1LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( !v10 )
    return 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v12 = CApplicationManager::_HandleCreation_EnsureApplicationView(v11, 0LL, a2, &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v12,
      v18);
  }
  else
  {
    v14 = 0LL;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, void **))v19)(
      v19,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v21);
    if ( v21 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 40) + 32LL))(
        (char *)this - 320,
        &GUID_00000000_0000_0000_c000_000000000046,
        &v20);
      ViewPropertySetFromHintsForWin32 = Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(
                                           (__int64 *)&v23,
                                           v20,
                                           v21);
      v14 = *ViewPropertySetFromHintsForWin32;
      *ViewPropertySetFromHintsForWin32 = 0LL;
      if ( (_QWORD)v23 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 16LL))(v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v21);
    ppvOut = 0LL;
    punk = 0LL;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 40) + 32LL))(
      (char *)this - 320,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    v16 = IUnknown_QueryService(
            punk,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
            &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    if ( v16 < 0 )
    {
      v17 = 3642LL;
    }
    else
    {
      v18 = v5;
      v16 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, __int64, _QWORD))(*(_QWORD *)ppvOut + 32LL))(
              ppvOut,
              v19,
              v14,
              0LL);
      if ( v16 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        return 0LL;
      }
      v17 = 3643LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v16,
      v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v13 = v16;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v13;
}
