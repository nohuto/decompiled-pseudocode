/*
 * XREFs of ?TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1801251F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_ @ 0x18012487C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18012487C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::TryInvokeBack(CTaskWindow *this, struct IAsyncCallback *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdi
  void *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IAsyncCallback *v12; // [rsp+70h] [rbp+30h] BYREF
  struct IAsyncCallback *v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v11[1] = -2LL;
  v4 = *((_QWORD *)this + 6);
  v5 = v4 == 0 ? 0x80004001 : 0;
  v6 = 0LL;
  if ( v4 )
  {
    v14 = 0LL;
    if ( a2 )
    {
      v13 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v12 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v7 = 0LL;
      v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
        v7 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_(
               (__int64)v8,
               &v12);
      v11[0] = 0LL;
      v10 = 0LL;
      v6 = v7;
      v14 = v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v4 = *((_QWORD *)this + 6);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 456LL))(v4, v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  return v5;
}
