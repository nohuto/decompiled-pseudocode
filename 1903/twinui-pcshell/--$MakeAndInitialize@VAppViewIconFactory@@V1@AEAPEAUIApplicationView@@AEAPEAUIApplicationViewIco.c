/*
 * XREFs of ??$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180300CE8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180301100 (--$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0AppViewIconFactory@@QEAA@XZ @ 0x1803022F0 (--0AppViewIconFactory@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180305638 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
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
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  AppViewIconFactory *v15; // [rsp+40h] [rbp+8h] BYREF
  AppViewIconFactory *v16; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (AppViewIconFactory *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v7;
  if ( v7 )
  {
    v8 = AppViewIconFactory::AppViewIconFactory(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v15 = v8;
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)v8 + 4, v9);
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)v10 + 5, v11);
    if ( v10 )
    {
      v12 = *((_QWORD *)v10 + 3);
      while ( v12 >= 0 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v12 + 1, v12);
        if ( v13 == v12 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
    }
LABEL_9:
    *a1 = v10;
    Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
