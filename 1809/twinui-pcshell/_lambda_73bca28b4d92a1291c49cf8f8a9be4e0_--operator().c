/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1801081A4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke @ 0x18010ACB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18010ACB0.c)
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18004CED8 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180112000 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator()(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  HWND v4; // r12
  __int64 v5; // rdi
  int v6; // edi
  HWND v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v15; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v17; // [rsp+90h] [rbp+50h] BYREF
  HWND v18; // [rsp+98h] [rbp+58h] BYREF

  v16 = a2;
  v14 = -2LL;
  v3 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v5 + 48LL))(
         v5,
         &v17);
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           &v17,
           &v13);
    if ( v6 >= 0 )
    {
      v6 = WindowFromViewWrapper(v17, &v18);
      v4 = v18;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  v15 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v8 + 56LL))(
           v8,
           &v15);
    if ( v6 >= 0 )
    {
      v6 = WindowFromViewWrapper(v15, &v18);
      v7 = v18;
    }
  }
  v16 = 0;
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), &v16);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 72LL))(*(_QWORD *)(a1 + 8), (unsigned int)v6);
  }
  else
  {
    v18 = *(HWND *)(a1 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v10);
      v11[2] = 0LL;
      if ( v11 + 2 != &v18 )
      {
        v11[2] = v9;
        v18 = 0LL;
      }
      *v11 = off_1803D0160;
      v3 = v11;
    }
    v6 = CAppViewManager::_SwitchAsyncWorker(*(_QWORD *)a1, v4, v7, v16, v15, v3, v3, v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v6;
}
