/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df__&_void___&_ @ 0x18038F474
 * Callers:
 *     ObservableProperty_bool_::AddListener__lambda_dcff52c4f625f8ebd2d760e1ea2509df___ @ 0x18038F2FC (ObservableProperty_bool_--AddListener__lambda_dcff52c4f625f8ebd2d760e1ea2509df___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180374DB4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 */

__int64 **__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df____void_____(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = *a2;
    v10 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v8 = *a3;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>((IApplicationViewChangeListener *)v6);
    *v6 = (__int64)off_18047B6F8;
    v6[2] = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 2);
    v6[3] = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    *a1 = v6;
  }
  return a1;
}
