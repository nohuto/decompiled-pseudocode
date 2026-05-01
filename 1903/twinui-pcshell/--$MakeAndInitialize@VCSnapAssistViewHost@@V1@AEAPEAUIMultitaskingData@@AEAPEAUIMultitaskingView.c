/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18034FB70
 * Callers:
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180350058 (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x18034FD20 (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1803503E0 (-InternalRelease@-$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1803505B4 (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewHost,CSnapAssistViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IMultitaskingViewVisibilityServiceInternal * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        volatile signed __int32 **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IMultitaskingViewVisibilityServiceInternal **a4,
        struct IImmersiveAppCrusher **a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a6,
        struct ITabViewManager **a7)
{
  CSnapAssistViewHost *v11; // rax
  int v12; // edi
  volatile signed __int32 *v13; // rbx
  struct IMultitaskingViewVisibilityServiceInternal *v14; // r9
  struct IMultitaskingViewManagerInternal *v15; // r8
  volatile signed __int32 *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CSnapAssistViewHost *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = (volatile signed __int32 *)CSnapAssistViewHost::CSnapAssistViewHost(v11);
    v14 = *a4;
    v15 = *a3;
    v17 = v13;
    v12 = CSnapAssistViewHost::RuntimeClassInitialize((CSnapAssistViewHost *)v13, *a2, v15, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        _InterlockedIncrement(v13 + 39);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<CSnapAssistViewHost>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
