/*
 * XREFs of ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801B5840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180014BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6F64 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6FB0 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B7274 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall RetailDemoExperienceManager::OnViewEvent(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r12
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, char *); // rbx
  __int64 **v11; // r15
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  LONG WindowLongW; // eax
  LONG v27; // eax
  int v28; // eax
  _OWORD *v29; // rdi
  _OWORD *v30; // rax
  _OWORD *v31; // rbx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _WORD *v35; // rcx
  __int64 result; // rax
  int v37[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v38; // [rsp+28h] [rbp-80h] BYREF
  __int128 v39; // [rsp+30h] [rbp-78h] BYREF
  __int64 v40; // [rsp+40h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+48h] [rbp-60h]
  _BYTE v42[24]; // [rsp+50h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v44; // [rsp+B0h] [rbp+8h]
  __int64 *v45; // [rsp+C0h] [rbp+18h] BYREF
  HWND hWnd; // [rsp+C8h] [rbp+20h] BYREF

  v40 = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 464);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 464));
  v41 = v6;
  try
  {
    v7 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        640LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    if ( v44 )
    {
      if ( v44 == 4 )
      {
        RetailDemoExperienceManager::_RestoreWorkingArea(this);
        RetailDemoExperienceManager::_SetDefaults(this);
        v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 32LL))(
                *((_QWORD *)this + 24),
                *((_QWORD *)this + 25));
        if ( v34 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            696LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v34);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 30);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 25);
        v35 = (_WORD *)((char *)this + 248);
        if ( *((_QWORD *)this + 34) >= 8uLL )
          v35 = (_WORD *)*((_QWORD *)this + 31);
        *((_QWORD *)this + 33) = 0LL;
        *v35 = 0;
        PulseEvent(*((HANDLE *)this + 57));
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 24);
      v10 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 24LL);
      v11 = (__int64 **)((char *)this + 200);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 25);
      v12 = v10(v9, (char *)this + 200);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          644LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
      v45 = 0LL;
      v13 = *v11;
      v14 = **v11;
      v45 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 32))(v13, &v45);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          648LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
      v16 = (_QWORD *)((char *)this + 248);
      if ( *((_QWORD *)this + 34) >= 8uLL )
        v16 = (_QWORD *)*v16;
      v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(*v45 + 72))(v45, v16, 1LL);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          651LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
      *(_QWORD *)v37 = 0LL;
      v18 = *v45;
      *(_QWORD *)v37 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64 *, int *))(v18 + 144))(v45, v37);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          655LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v37 + 64LL))(*(_QWORD *)v37, 1LL, 1LL);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          656LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v37 + 32LL))(*(_QWORD *)v37, 0LL);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          657LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v21);
      v22 = *((_QWORD *)this + 30);
      *((_QWORD *)this + 30) = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v11 + 104))(*v11, *((_QWORD *)this + 30));
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          661LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v23);
      v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v11 + 128))(*v11, 0LL);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          664LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v24);
      hWnd = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64 *, HWND *))(*v45 + 24))(v45, &hWnd);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          668LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v25);
      WindowLongW = GetWindowLongW(hWnd, -16);
      SetWindowLongW(hWnd, -16, WindowLongW & 0xFF30FFFF);
      v27 = GetWindowLongW(hWnd, -20);
      SetWindowLongW(hWnd, -20, v27 & 0xFFFFFEFF);
      v38 = 0LL;
      v28 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 30))(
              *((_QWORD *)this + 30),
              &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
              &v38);
      if ( v28 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5421LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v28);
      *(_QWORD *)&v39 = RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v39) = 0;
      *(_QWORD *)v42 = this;
      *(_OWORD *)&v42[8] = v39;
      v29 = 0LL;
      v30 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v31 = v30;
      if ( v30 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v30);
        v31[1] = *(_OWORD *)v42;
        *((_QWORD *)v31 + 4) = *(_QWORD *)&v42[16];
        *(_QWORD *)v31 = off_18043AB28;
        v29 = v31;
      }
      *(_QWORD *)&v39 = v29;
      v32 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v38 + 80LL))(v38, v29, (char *)this + 440);
      if ( v32 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          684LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v32);
      v33 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 392LL))(*((_QWORD *)this + 30), 4LL);
      if ( v33 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          687LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v33);
      RetailDemoExperienceManager::_Show(this);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v38);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v37);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v45);
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
