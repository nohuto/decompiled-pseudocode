/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18035E5C0
 * Callers:
 *     ?CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18035E8DC (-CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskin.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSnapAssistViewController@@QEAA@XZ @ 0x18035E6F8 (--0CSnapAssistViewController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x18035EA48 (-InternalRelease@-$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18035ECC4 (-RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIM.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewController,CSnapAssistViewController,WeakReference::IWeakReference * &,IMultitaskingViewManager * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        volatile signed __int32 **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManager **a3,
        struct IImmersiveAppCrusher **a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a5,
        struct ITabViewManager **a6)
{
  CSnapAssistViewController *v10; // rax
  int v11; // edi
  volatile signed __int32 *v12; // rbx
  struct IImmersiveAppCrusher *v13; // r9
  struct IMultitaskingViewManager *v14; // r8
  volatile signed __int32 *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CSnapAssistViewController *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = (volatile signed __int32 *)CSnapAssistViewController::CSnapAssistViewController(v10);
    v13 = *a4;
    v14 = *a3;
    v16 = v12;
    v11 = CSnapAssistViewController::RuntimeClassInitialize((CSnapAssistViewController *)v12, *a2, v14, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        _InterlockedIncrement(v12 + 33);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
