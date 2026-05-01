/*
 * XREFs of ?OnSelectedViewChangedForGroup@CDesktopPositioner@@AEAAJPEAUIInspectable@@0@Z @ 0x1803A2740
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int v9; // eax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  struct IUnknown *v13; // rbx
  HRESULT (__stdcall *v14)(IUnknown *, const IID *const, void **); // rdi
  int v15; // eax
  __int64 v16; // rdx
  struct IUnknown *v17; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  struct IUnknown *v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24[3]; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-28h]
  __int128 v26; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v24[1] = -2LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 184) & -(__int64)(this != 0LL));
  v24[2] = (__int64)v5;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v25 = v6;
  if ( !*((_QWORD *)this + 39) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_30;
  }
  v23 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v9 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))QueryInterface)(
         a2,
         &GUID_c8708459_3036_4e1a_8555_56cebb48e438,
         &v23);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v26 = 0uLL;
    v10 = (__int64 *)*((_QWORD *)this + 42);
    v11 = *v10;
    v22 = *v10;
    while ( (__int64 *)v11 != v10 )
    {
      if ( (unsigned int)SHIsSameObject(v23, *(struct IUnknown **)(v11 + 48)) )
      {
        v26 = *(_OWORD *)(v11 + 32);
        break;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v22);
      v11 = v22;
    }
    v12 = v26 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v26 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *((_QWORD *)&v26 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      v7 = 0;
      goto LABEL_29;
    }
    v24[0] = 0LL;
    v13 = v23;
    v14 = v23->lpVtbl[2].QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v14)(v13, v24);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 2799LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
      goto LABEL_29;
    }
    if ( v24[0] )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)this + 39) + 96LL))(
              *((_QWORD *)this + 39),
              v24[0],
              &v26);
      v7 = v15;
      if ( v15 < 0 )
      {
        v16 = 2803LL;
        goto LABEL_19;
      }
LABEL_27:
      v7 = 0;
      goto LABEL_28;
    }
    v22 = 0LL;
    v17 = v23;
    AddRef = v23->lpVtbl[2].AddRef;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v19 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))AddRef)(v17, &v22);
    v7 = v19;
    if ( v19 >= 0 )
    {
      if ( v22
        || (v19 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 39) + 112LL))(
                    *((_QWORD *)this + 39),
                    &v26),
            v7 = v19,
            v19 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_27;
      }
      v20 = 2817LL;
    }
    else
    {
      v20 = 2811LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xADB,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
LABEL_30:
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}
