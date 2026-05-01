/*
 * XREFs of ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010F760
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18004D7F0 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_ @ 0x1801073CC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_1801073CC.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::Switch(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *a2)
{
  RTL_SRWLOCK *v3; // rdi
  struct IAsyncCallback *v4; // rbx
  _QWORD *v5; // rax
  int v6; // eax
  RTL_SRWLOCK *v7; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF
  struct IAsyncCallback *v11; // [rsp+70h] [rbp+30h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this - 32);
  v10 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v7 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v8[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v4 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_(
                                    v5,
                                    &v7);
  v11 = v4;
  v6 = CAppViewManager::_QueueOperation(v3, v4);
  if ( v6 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
