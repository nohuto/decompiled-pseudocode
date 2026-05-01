/*
 * XREFs of ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180185150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800462A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801867C4 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186810 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186AC8 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall RetailDemoExperienceManager::OnViewEvent(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  LONG WindowLongW; // eax
  LONG v24; // eax
  int v25; // eax
  _OWORD *v26; // rdi
  _OWORD *v27; // rax
  _OWORD *v28; // rbx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _QWORD *v32; // rax
  __int64 result; // rax
  int v34[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+28h] [rbp-70h] BYREF
  __int128 v36; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37; // [rsp+40h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+48h] [rbp-50h]
  _BYTE v39[24]; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v41; // [rsp+A0h] [rbp+8h]
  HWND hWnd; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+20h] BYREF

  v37 = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 464);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 464));
  v38 = v6;
  try
  {
    v7 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        640LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    if ( v41 )
    {
      if ( v41 == 4 )
      {
        RetailDemoExperienceManager::_RestoreWorkingArea(this);
        RetailDemoExperienceManager::_SetDefaults(this);
        v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 32LL))(
                *((_QWORD *)this + 24),
                *((_QWORD *)this + 25));
        if ( v31 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            696LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v31);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 30);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
        v32 = (_QWORD *)((char *)this + 248);
        *((_QWORD *)this + 33) = 0LL;
        if ( *((_QWORD *)this + 34) >= 8uLL )
          v32 = (_QWORD *)*v32;
        *(_WORD *)v32 = 0;
        PulseEvent(*((HANDLE *)this + 57));
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 24);
      v10 = (_QWORD *)((char *)this + 200);
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
      v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 24LL))(v9, (char *)this + 200);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          644LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      v12 = *v10;
      v43 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v43);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          648LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      v14 = (_QWORD *)((char *)this + 248);
      if ( *((_QWORD *)this + 34) >= 8uLL )
        v14 = (_QWORD *)*v14;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v43 + 72LL))(v43, v14, 1LL);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          651LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
      *(_QWORD *)v34 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 144LL))(v43, v34);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          655LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v34 + 64LL))(*(_QWORD *)v34, 1LL, 1LL);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          656LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v34 + 32LL))(*(_QWORD *)v34, 0LL);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          657LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v18);
      v19 = *((_QWORD *)this + 30);
      *((_QWORD *)this + 30) = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 104LL))(*v10, *((_QWORD *)this + 30));
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          661LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 128LL))(*v10, 0LL);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          664LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v21);
      hWnd = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v43 + 24LL))(v43, &hWnd);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          668LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
      WindowLongW = GetWindowLongW(hWnd, -16);
      SetWindowLongW(hWnd, -16, WindowLongW & 0xFF30FFFF);
      v24 = GetWindowLongW(hWnd, -20);
      SetWindowLongW(hWnd, -20, v24 & 0xFFFFFEFF);
      v35 = 0LL;
      v25 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 30))(
              *((_QWORD *)this + 30),
              &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
              &v35);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5800LL,
          (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
          (const char *)(unsigned int)v25);
      *(_QWORD *)&v36 = RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v36) = 0;
      *(_QWORD *)v39 = this;
      *(_OWORD *)&v39[8] = v36;
      v26 = 0LL;
      v27 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v28 = v27;
      if ( v27 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v27);
        v28[1] = *(_OWORD *)v39;
        *((_QWORD *)v28 + 4) = *(_QWORD *)&v39[16];
        *(_QWORD *)v28 = off_1803D51D0;
        v26 = v28;
      }
      *(_QWORD *)&v36 = v26;
      v29 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v35 + 80LL))(v35, v26, (char *)this + 440);
      if ( v29 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          684LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v29);
      v30 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 392LL))(*((_QWORD *)this + 30), 4LL);
      if ( v30 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          687LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v30);
      RetailDemoExperienceManager::_Show(this);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v35);
      if ( *(_QWORD *)v34 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 16LL))(*(_QWORD *)v34);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v43);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C3,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v8);
  }
  return result;
}
