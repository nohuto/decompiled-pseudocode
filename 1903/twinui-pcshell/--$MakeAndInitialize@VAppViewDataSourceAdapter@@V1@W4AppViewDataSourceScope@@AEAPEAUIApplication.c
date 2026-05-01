/*
 * XREFs of ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@$$QEAW4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T66@Z @ 0x180300B64
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@$$QEAW4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T55@Z @ 0x180301008 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplica.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x180302000 (--0AppViewDataSourceAdapter@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAAXPEAVAppViewDataSourceAdapter@@@Z @ 0x180303A58 (-Attach@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAAXPEAVAppViewDataSourceAdapter@@@.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x180305614 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x180307368 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicatio.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewDataSourceAdapter,AppViewDataSourceAdapter,enum AppViewDataSourceScope,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,std::nullptr_t,std::nullptr_t,std::nullptr_t>(
        AppViewDataSourceAdapter **a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  AppViewDataSourceAdapter *v13; // rax
  int v14; // edi
  AppViewDataSourceAdapter *v15; // rax
  __int64 v16; // r9
  AppViewDataSourceAdapter *v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  AppViewDataSourceAdapter *v21; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (AppViewDataSourceAdapter *)operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v13;
  if ( v13 )
  {
    v15 = AppViewDataSourceAdapter::AppViewDataSourceAdapter(v13);
    v21 = 0LL;
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::Attach(&v21, v15);
    v16 = *a4;
    v17 = v21;
    v14 = AppViewDataSourceAdapter::RuntimeClassInitialize(v21, *a2, *a3, v16, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
    {
      if ( v17 )
      {
        v18 = *((_QWORD *)v17 + 30);
        while ( v18 >= 0 )
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 30, v18 + 1, v18);
          if ( v19 == v18 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v18 + 16));
LABEL_10:
        v17 = v21;
      }
      *a1 = v17;
      v14 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v21);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
