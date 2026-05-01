/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18001DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18000DAD0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009A6C8 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180282098 (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(
        RTL_SRWLOCK *this,
        unsigned __int64 a2,
        HWND a3,
        const char *a4)
{
  PVOID v6; // r15
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v7; // rbx
  RTL_SRWLOCK **v8; // rsi
  RTL_SRWLOCK **v9; // r12
  RTL_SRWLOCK *v10; // rcx
  __int64 result; // rax
  unsigned int PropW; // r12d
  char *v13; // rbx
  __int64 *Ptr; // rsi
  __int64 *v15; // rax
  __int64 v16; // rcx
  std::_Ref_count_base *v17; // rsi
  std::_Ref_count_base *v18; // r14
  RTL_SRWLOCK *v19; // rbx
  __int64 *v20; // rdi
  __int64 *v21; // rsi
  bool v22; // si
  __int64 v23; // rdx
  char **v24; // rdi
  char **v25; // r12
  HWND v26; // rsi
  char *v27; // rcx
  PVOID v28; // rcx
  PVOID v29; // rdi
  int v30; // esi
  __int64 v31; // rax
  std::_Ref_count_base *v32; // rcx
  __int64 v33; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v34; // rdi
  __int64 v35; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v36; // [rsp+30h] [rbp-68h] BYREF
  std::_Ref_count_base *v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  __int64 *v39; // [rsp+48h] [rbp-50h]
  std::_Ref_count_base *v40[2]; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v42; // [rsp+A8h] [rbp+10h] BYREF
  RTL_SRWLOCK *v43; // [rsp+B0h] [rbp+18h]
  RTL_SRWLOCK *v44; // [rsp+B8h] [rbp+20h] BYREF

  v42 = (char *)a2;
  v38 = -2LL;
  try
  {
    v6 = 0LL;
    LODWORD(v43) = 0;
    if ( a2 <= 0x26 )
    {
      if ( (_DWORD)a2 == 17 )
      {
        PropW = (unsigned int)GetPropW(a3, L"Microsoft.Windows.WindowFactory.ViewId");
        if ( PropW )
        {
          *(_OWORD *)v40 = 0LL;
          v44 = 0LL;
          AcquireSRWLockExclusive(this + 47);
          v39 = (__int64 *)&this[47];
          v13 = 0LL;
          v42 = 0LL;
          LODWORD(v43) = 1;
          Ptr = (__int64 *)this[34].Ptr;
          v15 = (__int64 *)this[35].Ptr;
          v36 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v15;
          while ( Ptr != v15 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*Ptr + 288LL))(*Ptr) == PropW )
            {
              v16 = *Ptr;
              v13 = (char *)v16;
              v42 = (char *)*Ptr;
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
              break;
            }
            ++Ptr;
            v15 = (__int64 *)v36;
          }
          v42 = 0LL;
          v44 = (RTL_SRWLOCK *)v13;
          if ( !v13
            || (v30 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 256LL))(v13),
                (*(void (__fastcall **)(char *, HWND))(*(_QWORD *)v13 + 208LL))(v13, a3),
                (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v13 + 256LL))(v13) == v30) )
          {
            v17 = v40[1];
            v18 = v40[0];
          }
          else
          {
            v31 = (*(__int64 (__fastcall **)(char *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v13 + 264LL))(
                    v13,
                    &v36);
            v18 = *(std::_Ref_count_base **)v31;
            v17 = *(std::_Ref_count_base **)(v31 + 8);
            *(_QWORD *)v31 = 0LL;
            *(_QWORD *)(v31 + 8) = 0LL;
            v40[0] = v18;
            v32 = v40[1];
            v40[1] = v17;
            if ( v32 )
              std::_Ref_count_base::_Decref(v32);
            if ( v37 )
              std::_Ref_count_base::_Decref(v37);
          }
          if ( this != (RTL_SRWLOCK *)-376LL )
            ReleaseSRWLockExclusive(this + 47);
          if ( v18 )
          {
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
              &v44,
              &v36);
            v33 = *((_QWORD *)v18 + 3);
            v42 = (char *)v33;
            if ( v33 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
              v33 = (__int64)v42;
            }
            v39 = (__int64 *)&v42;
            v34 = v36;
            v43 = (RTL_SRWLOCK *)v33;
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            WindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)&this[-10], v34, 6);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
            if ( v36 )
              (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v36 + 16LL))(v36);
          }
          if ( v13 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
        }
      }
      else if ( (_DWORD)a2 == 18 )
      {
        SetLastError(0);
        if ( (unsigned int)IsWindowInDestroy(a3) || GetLastError() == 1400 )
        {
          v19 = this + 47;
          AcquireSRWLockExclusive(this + 47);
          v44 = this + 47;
          v42 = 0LL;
          LODWORD(v43) = 4;
          v20 = (__int64 *)this[34].Ptr;
          v21 = (__int64 *)this[35].Ptr;
          while ( v20 != v21 )
          {
            if ( *v20 && a3 == (HWND)(*(int (__fastcall **)(__int64))(*(_QWORD *)*v20 + 256LL))(*v20) )
            {
              v35 = *v20;
              v6 = (PVOID)v35;
              v42 = (char *)*v20;
              if ( v35 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
              break;
            }
            ++v20;
          }
          if ( v6 )
          {
            (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v6 + 208LL))(v6, 0LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
          }
LABEL_19:
          if ( v19 )
            ReleaseSRWLockExclusive(v19);
        }
      }
      else
      {
        switch ( (int)a2 )
        {
          case 19:
          case 23:
          case 25:
          case 26:
          case 27:
            v19 = this + 47;
            AcquireSRWLockExclusive(this + 47);
            v39 = (__int64 *)&this[47];
            v36 = 0LL;
            if ( !(unsigned int)IsShellManagedWindow(a3) )
              goto LABEL_58;
            v22 = 0;
            v23 = 0LL;
            v42 = 0LL;
            v44 = 0LL;
            LODWORD(v43) = 8;
            v24 = (char **)this[34].Ptr;
            v25 = (char **)this[35].Ptr;
            while ( 2 )
            {
              if ( v24 == v25 )
                goto LABEL_56;
              if ( !*v24 )
                goto LABEL_52;
              v26 = (HWND)(*(int (__fastcall **)(char *))(*(_QWORD *)*v24 + 256LL))(*v24);
              if ( a3 != (HWND)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)*v24 + 352LL))(*v24) && a3 != v26 )
              {
                v23 = (__int64)v42;
                v22 = 0;
LABEL_52:
                ++v24;
                continue;
              }
              break;
            }
            v27 = *v24;
            v23 = (__int64)v27;
            v42 = *v24;
            v44 = (RTL_SRWLOCK *)v27;
            if ( v27 )
            {
              (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v27 + 8LL))(v27, v27);
              v23 = (__int64)v42;
            }
            v22 = a3 == v26;
LABEL_56:
            v44 = 0LL;
            v6 = (PVOID)v23;
            v36 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v23;
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 336LL))(v23);
LABEL_58:
            v28 = this[45].Ptr;
            if ( v28 != v6 )
            {
              if ( v28 )
                (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v28 + 344LL))(v28, 0LL);
              if ( v6 )
                (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v6 + 344LL))(v6, 1LL);
            }
            v29 = this[45].Ptr;
            this[45].Ptr = v6;
            if ( v6 )
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 8LL))(v6);
            if ( v29 )
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v29 + 16LL))(v29);
            this[44].Ptr = a3;
            if ( v6 )
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
            goto LABEL_19;
          case 31:
          case 36:
          case 38:
            v36 = 0LL;
            AcquireSRWLockShared(this + 47);
            v39 = (__int64 *)&this[47];
            v7 = 0LL;
            v44 = 0LL;
            LODWORD(v43) = 16;
            v8 = (RTL_SRWLOCK **)this[34].Ptr;
            v9 = (RTL_SRWLOCK **)this[35].Ptr;
            break;
          case 34:
            v19 = this + 47;
            AcquireSRWLockExclusive(this + 47);
            v43 = this + 47;
            WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v42, a3);
            if ( v42 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v42 + 336LL))(v42);
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v42);
            goto LABEL_19;
          default:
            goto LABEL_21;
        }
        while ( v8 != v9 )
        {
          if ( *v8 && a3 == (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*v8)->Ptr + 32))(*v8) )
          {
            v10 = *v8;
            v7 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v10;
            v44 = *v8;
            if ( v10 )
              (*((void (__fastcall **)(RTL_SRWLOCK *))v10->Ptr + 1))(v10);
            break;
          }
          ++v8;
        }
        v44 = 0LL;
        v36 = v7;
        if ( this != (RTL_SRWLOCK *)-376LL )
          ReleaseSRWLockShared(this + 47);
        if ( v7 )
        {
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, char *))(*(_QWORD *)v7 + 328LL))(
            v7,
            v42);
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v7 + 16LL))(v7);
        }
      }
    }
LABEL_21:
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v42) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1A6,
                     (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     a4);
    return (unsigned int)v42;
  }
  return result;
}
