/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1800337C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180025ED4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800281C0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009090C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18022D240 (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(
        RTL_SRWLOCK *this,
        unsigned __int64 a2,
        HWND a3,
        const char *a4)
{
  PVOID v6; // r14
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v7; // rbx
  RTL_SRWLOCK **v8; // rsi
  RTL_SRWLOCK **v9; // r12
  RTL_SRWLOCK *v10; // rcx
  __int64 result; // rax
  char *v12; // rbx
  __int64 *Ptr; // rsi
  __int64 *v14; // r12
  __int64 v15; // rcx
  std::_Ref_count_base *v16; // rdi
  RTL_SRWLOCK *v17; // rbx
  __int64 *v18; // rdi
  __int64 *v19; // rsi
  bool v20; // si
  __int64 v21; // rdx
  char **v22; // rdi
  char **v23; // r12
  HWND v24; // rsi
  char *v25; // rcx
  PVOID v26; // rcx
  PVOID v27; // rdi
  int v28; // esi
  __int64 *v29; // rax
  __int64 v30; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v31; // rdi
  __int64 v32; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *PropW; // [rsp+30h] [rbp-68h] BYREF
  std::_Ref_count_base *v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int64 *v36; // [rsp+48h] [rbp-50h]
  std::_Ref_count_base *v37[2]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v39; // [rsp+A8h] [rbp+10h] BYREF
  RTL_SRWLOCK *v40; // [rsp+B0h] [rbp+18h]
  RTL_SRWLOCK *v41; // [rsp+B8h] [rbp+20h] BYREF

  v39 = (char *)a2;
  v35 = -2LL;
  try
  {
    v6 = 0LL;
    LODWORD(v40) = 0;
    if ( a2 <= 0x26 )
    {
      if ( (_DWORD)a2 == 17 )
      {
        PropW = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)GetPropW(
                                                                                       a3,
                                                                                       L"Microsoft.Windows.WindowFactory.ViewId");
        if ( (_DWORD)PropW )
        {
          *(_OWORD *)v37 = 0LL;
          v41 = 0LL;
          AcquireSRWLockExclusive(this + 48);
          v36 = (__int64 *)&this[48];
          v12 = 0LL;
          v39 = 0LL;
          LODWORD(v40) = 1;
          Ptr = (__int64 *)this[35].Ptr;
          v14 = (__int64 *)this[36].Ptr;
          while ( Ptr != v14 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*Ptr + 272LL))(*Ptr) == (_DWORD)PropW )
            {
              v15 = *Ptr;
              v12 = (char *)v15;
              v39 = (char *)*Ptr;
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
              break;
            }
            ++Ptr;
          }
          v39 = 0LL;
          v41 = (RTL_SRWLOCK *)v12;
          if ( v12 )
          {
            v28 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 240LL))(v12);
            (*(void (__fastcall **)(char *, HWND))(*(_QWORD *)v12 + 192LL))(v12, a3);
            if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v12 + 240LL))(v12) != v28 )
            {
              v29 = (__int64 *)(*(__int64 (__fastcall **)(char *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v12 + 248LL))(
                                 v12,
                                 &PropW);
              std::shared_ptr<ViewEventRegistration>::operator=(v37, v29);
              if ( v34 )
                std::_Ref_count_base::_Decref(v34);
            }
          }
          if ( this != (RTL_SRWLOCK *)-384LL )
            ReleaseSRWLockExclusive(this + 48);
          v16 = v37[0];
          if ( v37[0] )
          {
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
              &v41,
              &PropW);
            v30 = *((_QWORD *)v16 + 3);
            v39 = (char *)v30;
            if ( v30 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
              v30 = (__int64)v39;
            }
            v36 = (__int64 *)&v39;
            v31 = PropW;
            v40 = (RTL_SRWLOCK *)v30;
            if ( v30 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
            WindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)&this[-10], v31, 6);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
            if ( PropW )
              (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)PropW + 16LL))(PropW);
          }
          if ( v12 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
          if ( v37[1] )
            std::_Ref_count_base::_Decref(v37[1]);
        }
        goto LABEL_22;
      }
      if ( (_DWORD)a2 != 18 )
      {
        if ( (_DWORD)a2 == 38 )
        {
LABEL_7:
          PropW = 0LL;
          AcquireSRWLockShared(this + 48);
          v36 = (__int64 *)&this[48];
          v7 = 0LL;
          v41 = 0LL;
          LODWORD(v40) = 16;
          v8 = (RTL_SRWLOCK **)this[35].Ptr;
          v9 = (RTL_SRWLOCK **)this[36].Ptr;
          while ( v8 != v9 )
          {
            if ( *v8 && a3 == (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*v8)->Ptr + 30))(*v8) )
            {
              v10 = *v8;
              v7 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v10;
              v41 = *v8;
              if ( v10 )
                (*((void (__fastcall **)(RTL_SRWLOCK *))v10->Ptr + 1))(v10);
              break;
            }
            ++v8;
          }
          v41 = 0LL;
          PropW = v7;
          if ( this != (RTL_SRWLOCK *)-384LL )
            ReleaseSRWLockShared(this + 48);
          if ( v7 )
          {
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, char *))(*(_QWORD *)v7 + 312LL))(
              v7,
              v39);
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v7 + 16LL))(v7);
          }
          goto LABEL_22;
        }
        switch ( (int)a2 )
        {
          case 19:
          case 23:
          case 25:
          case 26:
          case 27:
            v17 = this + 48;
            AcquireSRWLockExclusive(this + 48);
            v36 = (__int64 *)&this[48];
            PropW = 0LL;
            if ( !(unsigned int)IsShellManagedWindow(a3) )
              goto LABEL_58;
            v20 = 0;
            v21 = 0LL;
            v39 = 0LL;
            v41 = 0LL;
            LODWORD(v40) = 8;
            v22 = (char **)this[35].Ptr;
            v23 = (char **)this[36].Ptr;
            break;
          case 31:
          case 36:
            goto LABEL_7;
          case 34:
            v17 = this + 48;
            AcquireSRWLockExclusive(this + 48);
            v40 = this + 48;
            WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v39, a3);
            if ( v39 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v39 + 320LL))(v39);
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v39);
            goto LABEL_20;
          default:
            goto LABEL_22;
        }
        while ( v22 != v23 )
        {
          if ( *v22 )
          {
            v24 = (HWND)(*(int (__fastcall **)(char *))(*(_QWORD *)*v22 + 240LL))(*v22);
            if ( a3 == (HWND)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)*v22 + 336LL))(*v22) || a3 == v24 )
            {
              v25 = *v22;
              v21 = (__int64)v25;
              v39 = *v22;
              v41 = (RTL_SRWLOCK *)v25;
              if ( v25 )
              {
                (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v25 + 8LL))(v25, v25);
                v21 = (__int64)v39;
              }
              v20 = a3 == v24;
              break;
            }
            v21 = (__int64)v39;
            v20 = 0;
          }
          ++v22;
        }
        v41 = 0LL;
        v6 = (PVOID)v21;
        PropW = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v21;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 320LL))(v21);
LABEL_58:
        v26 = this[46].Ptr;
        if ( v26 != v6 )
        {
          if ( v26 )
            (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v26 + 328LL))(v26, 0LL);
          if ( v6 )
            (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v6 + 328LL))(v6, 1LL);
        }
        v27 = this[46].Ptr;
        this[46].Ptr = v6;
        if ( v6 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 8LL))(v6);
        if ( v27 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v27 + 16LL))(v27);
        this[45].Ptr = a3;
        if ( v6 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
        goto LABEL_20;
      }
      SetLastError(0);
      if ( (unsigned int)IsWindowInDestroy(a3) || GetLastError() == 1400 )
      {
        v17 = this + 48;
        AcquireSRWLockExclusive(this + 48);
        v41 = this + 48;
        v39 = 0LL;
        LODWORD(v40) = 4;
        v18 = (__int64 *)this[35].Ptr;
        v19 = (__int64 *)this[36].Ptr;
        while ( v18 != v19 )
        {
          if ( *v18 && a3 == (HWND)(*(int (__fastcall **)(__int64))(*(_QWORD *)*v18 + 240LL))(*v18) )
          {
            v32 = *v18;
            v6 = (PVOID)v32;
            v39 = (char *)*v18;
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
            break;
          }
          ++v18;
        }
        if ( v6 )
        {
          (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v6 + 192LL))(v6, 0LL);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
        }
LABEL_20:
        if ( v17 )
          ReleaseSRWLockExclusive(v17);
      }
    }
LABEL_22:
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v39) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x18F,
                     (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     a4);
    return (unsigned int)v39;
  }
  return result;
}
