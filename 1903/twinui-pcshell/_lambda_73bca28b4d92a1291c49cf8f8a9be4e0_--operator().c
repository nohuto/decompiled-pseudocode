/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x18012E244
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke @ 0x180131320 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180131320.c)
 * Callees:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18000FD64 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800103D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030A98 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180139648 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator()(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  HWND v4; // r12
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  int v7; // edi
  HWND v8; // r14
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  HWND v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v17; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v19; // [rsp+90h] [rbp+50h] BYREF
  HWND v20; // [rsp+98h] [rbp+58h] BYREF

  v18 = a2;
  v16 = -2LL;
  v3 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = a1[1];
  v6 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v5 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v7 = v6(v5, &v19);
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v19,
           &v15);
    if ( v7 >= 0 )
    {
      v7 = WindowFromViewWrapper(
             (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v19,
             &v20);
      v4 = v20;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  v17 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  if ( v7 >= 0 )
  {
    v9 = a1[1];
    v10 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v7 = v10(v9, &v17);
    if ( v7 >= 0 )
    {
      v7 = WindowFromViewWrapper(
             (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v17,
             &v20);
      v8 = v20;
    }
  }
  v18 = 0;
  if ( v7 < 0
    || (v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[1] + 64LL))(a1[1], &v18), v7 < 0) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[1] + 72LL))(a1[1], (unsigned int)v7);
  }
  else
  {
    v11 = (HWND)a1[1];
    v20 = v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v12);
      v13[2] = 0LL;
      if ( v13 + 2 != &v20 )
      {
        v13[2] = v11;
        v20 = 0LL;
      }
      *v13 = off_180434F60;
      v3 = v13;
    }
    v7 = CAppViewManager::_SwitchAsyncWorker(*a1, v4, v8, v18, v17, v3, v3, v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v7;
}
