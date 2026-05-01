/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f_____lambda_775801dc926fad4e7766c846adb2ec1f__&_void___&_ @ 0x180361DE8
 * Callers:
 *     ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___ @ 0x180361AF4 (ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c2119f3dd10f8dbad5.c)
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___ @ 0x180361BE4 (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPoli_ea_180361BE4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1803555C4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 */

__int64 **__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f_____lambda_775801dc926fad4e7766c846adb2ec1f____void_____(
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
    *v6 = (__int64)off_180459C80;
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
