/*
 * XREFs of ??$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITitleBarController@@@Details@WRL@Microsoft@@YAJPEAPEAVTabShellHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@89Internal@Windows@@AEAPEAUITitleBarController@@@Z @ 0x18025A7B4
 * Callers:
 *     ?TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITitleBarController@@AEBU_GUID@@PEAPEAX@Z @ 0x18025BD40 (-TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationVi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabShellHotKeyHandler@@QEAA@XZ @ 0x18025A884 (--0TabShellHotKeyHandler@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18025BC10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 *     ?RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@6789@PEAUITitleBarController@@@Z @ 0x18025BC60 (-RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApp.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabShellHotKeyHandler,TabShellHotKeyHandler,IImmersiveWindowMessageService * &,IApplicationViewCollection * &,ITabViewManager * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITitleBarController * &>(
        volatile signed __int32 **a1,
        struct IImmersiveWindowMessageService **a2,
        struct IApplicationViewCollection **a3,
        struct ITabViewManager **a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel **a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a6,
        struct ITitleBarController **a7)
{
  TabShellHotKeyHandler *v11; // rax
  int v12; // edi
  volatile signed __int32 *v13; // rbx

  *a1 = 0LL;
  v11 = (TabShellHotKeyHandler *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = (volatile signed __int32 *)TabShellHotKeyHandler::TabShellHotKeyHandler(v11);
    v12 = TabShellHotKeyHandler::RuntimeClassInitialize((TabShellHotKeyHandler *)v13, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        _InterlockedIncrement(v13 + 5);
      *a1 = v13;
      v12 = 0;
    }
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
