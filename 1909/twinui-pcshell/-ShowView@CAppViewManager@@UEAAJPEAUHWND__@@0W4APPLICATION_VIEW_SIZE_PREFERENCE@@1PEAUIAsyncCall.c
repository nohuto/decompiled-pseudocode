/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x180151E40
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180054FE4 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_ @ 0x18014C7B8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18014C7B8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::ShowView(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, void *a6)
{
  __int64 v10; // rsi
  RTL_SRWLOCK *v11; // r12
  struct IAsyncCallback *v12; // rbx
  void *v13; // rax
  unsigned int v14; // ebx
  __int64 v16[3]; // [rsp+28h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  void *v20; // [rsp+80h] [rbp+30h] BYREF

  v10 = (__int64)a6;
  v20 = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v11 = (RTL_SRWLOCK *)(a1 - 32);
  a6 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
  v16[0] = (__int64)v11;
  v12 = 0LL;
  a6 = 0LL;
  v16[1] = a2;
  v16[2] = a3;
  v17 = a4;
  v18 = a5;
  v19 = v10;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v13 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
    v12 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_(
                                     (__int64)v13,
                                     (__int64)v16);
  a6 = v12;
  v14 = CAppViewManager::_QueueOperation(v11, v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  return v14;
}
