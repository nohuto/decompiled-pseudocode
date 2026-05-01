/*
 * XREFs of ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x18000FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800100D4 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_ @ 0x180010350 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180010350.c)
 *     _lambda_6a3f3a3b5daae62068289b6d6a8748e7_::__lambda_6a3f3a3b5daae62068289b6d6a8748e7_ @ 0x180010748 (_lambda_6a3f3a3b5daae62068289b6d6a8748e7_--__lambda_6a3f3a3b5daae62068289b6d6a8748e7_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::ShowAsStandalone(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *a2,
        struct IPresentationRequestedArgs *a3)
{
  CAppViewManager *v5; // rdi
  struct IAsyncCallback *v6; // rbx
  void *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  CAppViewManager *v11; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *v14; // [rsp+70h] [rbp+30h] BYREF
  char *v15; // [rsp+78h] [rbp+38h] BYREF
  struct IAsyncCallback *v16; // [rsp+80h] [rbp+40h] BYREF
  struct IPresentationRequestedArgs *v17; // [rsp+88h] [rbp+48h]

  v5 = (CAppViewManager *)((char *)this - 32);
  v15 = (char *)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v14 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v17 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v11 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v12[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  v12[1] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_(
                                    v7,
                                    &v11);
  v16 = v6;
  lambda_6a3f3a3b5daae62068289b6d6a8748e7_::__lambda_6a3f3a3b5daae62068289b6d6a8748e7_(&v11);
  if ( v6 )
  {
    v8 = CAppViewManager::_QueueOperation(v5, v6);
    v9 = v8;
    if ( v8 < 0 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *, _QWORD))(*(_QWORD *)a2 + 88LL))(
        a2,
        (unsigned int)v8);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL,
      -2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 16LL))(a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v9;
}
