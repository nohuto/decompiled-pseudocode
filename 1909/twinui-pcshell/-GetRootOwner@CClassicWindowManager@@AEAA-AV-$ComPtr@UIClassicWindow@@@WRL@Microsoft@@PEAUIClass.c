/*
 * XREFs of ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180052C6C
 * Callers:
 *     ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180051420 (-GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___ @ 0x180052A60 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___.c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180148AC0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_QWORD *__fastcall CClassicWindowManager::GetRootOwner(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  *a2 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 96LL))(*a2);
  v7 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
  while ( v4 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, &v7);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v7, v6);
    v4 = v7;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return a2;
}
