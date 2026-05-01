/*
 * XREFs of ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004D540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18004D7F0 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_ @ 0x18004DA5C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18004DA5C.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::ShowAsStandalone(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *a2)
{
  CAppViewManager *v3; // rdi
  struct IAsyncCallback *v4; // rbx
  void *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  CAppViewManager *v9; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *v12; // [rsp+60h] [rbp+20h] BYREF
  char *v13; // [rsp+68h] [rbp+28h] BYREF
  struct IAsyncCallback *v14; // [rsp+70h] [rbp+30h] BYREF

  v3 = (CAppViewManager *)((char *)this - 32);
  v13 = (char *)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v9 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v10[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  v4 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_(
                                    v5,
                                    &v9);
  v14 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v4 )
  {
    v6 = CAppViewManager::_QueueOperation(v3, v4);
    v7 = v6;
    if ( v6 < 0 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *, _QWORD))(*(_QWORD *)a2 + 88LL))(
        a2,
        (unsigned int)v6);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v7;
}
