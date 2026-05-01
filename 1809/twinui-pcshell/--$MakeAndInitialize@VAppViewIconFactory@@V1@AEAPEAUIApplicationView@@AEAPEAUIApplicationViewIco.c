/*
 * XREFs of ??$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802A8690
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802A8AC8 (--$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ??0AppViewIconFactory@@QEAA@XZ @ 0x1802A9D88 (--0AppViewIconFactory@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802AD168 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewIconFactory,AppViewIconFactory,IApplicationView * &,IApplicationViewIconLoader * &>(
        AppViewIconFactory **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  AppViewIconFactory *v7; // rax
  AppViewIconFactory *v8; // rax
  __int64 v9; // rdx
  AppViewIconFactory *v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  AppViewIconFactory *v16; // [rsp+40h] [rbp+8h] BYREF
  AppViewIconFactory *v17; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (AppViewIconFactory *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v7;
  if ( v7 )
  {
    v8 = AppViewIconFactory::AppViewIconFactory(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v16 = v8;
    wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)v8 + 4, v9);
    wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)v10 + 5, v11);
    if ( v10 )
    {
      v13 = *((_QWORD *)v10 + 3);
      while ( v13 >= 0 )
      {
        if ( (_DWORD)v13 != 0x7FFFFFFF )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v13 + 1, v13);
          if ( v14 != v13 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v13 + 16), v12);
    }
LABEL_10:
    *a1 = v10;
    Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
