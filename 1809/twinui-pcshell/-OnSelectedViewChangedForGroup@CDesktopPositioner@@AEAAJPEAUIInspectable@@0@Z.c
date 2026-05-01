/*
 * XREFs of ?OnSelectedViewChangedForGroup@CDesktopPositioner@@AEAAJPEAUIInspectable@@0@Z @ 0x18033D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::OnSelectedViewChangedForGroup(
        CDesktopPositioner *this,
        struct IInspectable *a2,
        struct IInspectable *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int v6; // r15d
  unsigned int v7; // ebx
  int v8; // eax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  struct IUnknown *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  struct IUnknown *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-50h] BYREF
  struct IUnknown *v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21[3]; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v21[1] = -2LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 184) & -(__int64)(this != 0LL));
  v21[2] = (__int64)v5;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v22 = v6;
  if ( !*((_QWORD *)this + 39) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC9,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_30;
  }
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v8 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c8708459_3036_4e1a_8555_56cebb48e438,
         &v20);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v23 = 0uLL;
    v9 = (__int64 *)*((_QWORD *)this + 42);
    v10 = *v9;
    v19 = *v9;
    while ( (__int64 *)v10 != v9 )
    {
      if ( (unsigned int)SHIsSameObject(v20, *(struct IUnknown **)(v10 + 48)) )
      {
        v23 = *(_OWORD *)(v10 + 32);
        break;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v19);
      v10 = v19;
    }
    v11 = v23 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v23 == *(_QWORD *)&GUID_NULL.Data1 )
      v11 = *((_QWORD *)&v23 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v11 )
    {
      v7 = 0;
      goto LABEL_29;
    }
    v21[0] = 0LL;
    v12 = v20;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v12->lpVtbl[2].QueryInterface)(v12, v21);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 2784LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
      goto LABEL_29;
    }
    if ( v21[0] )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)this + 39) + 88LL))(
              *((_QWORD *)this + 39),
              v21[0],
              &v23);
      v7 = v13;
      if ( v13 < 0 )
      {
        v14 = 2788LL;
        goto LABEL_19;
      }
LABEL_27:
      v7 = 0;
      goto LABEL_28;
    }
    v19 = 0LL;
    v15 = v20;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v16 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v15->lpVtbl[2].AddRef)(v15, &v19);
    v7 = v16;
    if ( v16 >= 0 )
    {
      if ( v19
        || (v16 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 39) + 96LL))(
                    *((_QWORD *)this + 39),
                    &v23),
            v7 = v16,
            v16 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_27;
      }
      v17 = 2802LL;
    }
    else
    {
      v17 = 2796LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xACC,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_30:
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}
