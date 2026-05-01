/*
 * XREFs of ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801BEE44
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CortanaStoreAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801BDA60 (-OnClientWindowReadyForPresentationChanged@CortanaStoreAppExperienceManager@@AEAAJPEAUIClientWin.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BDCFC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BE2EC (-OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18007C2E8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BC544 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CortanaStoreAppExperienceManager::SetAltTabWindowVisibility(
        HWND *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND *v2; // rbx

  v2 = this + 48;
  if ( (_BYTE)a2 )
  {
    if ( !*v2 )
    {
      CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow((CortanaStoreAppExperienceManager *)this, a2);
      if ( *v2 )
        ShowWindow(*v2, 4);
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      this + 48,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      this + 49,
      0LL);
  }
}
