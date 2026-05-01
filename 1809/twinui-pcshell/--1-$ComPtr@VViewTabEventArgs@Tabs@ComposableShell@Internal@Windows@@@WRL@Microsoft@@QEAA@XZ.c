/*
 * XREFs of ??1?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D52EC
 * Callers:
 *     _wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_IApplicationView_____ptr64_Windows::Internal::ComposableShell::Tabs::IShellTab_____ptr64__::_1_::dtor$0 @ 0x1801CFBF5 (_wil--MakeOrThrow_Windows--Internal--ComposableShell--Tabs--ViewTabEventArgs_IApplicationView___.c)
 *     _TabViewManager::AddVirtualTabForWindow_::_1_::dtor$8 @ 0x1801D872D (_TabViewManager--AddVirtualTabForWindow_--_1_--dtor$8.c)
 *     _TabViewManager::ConnectTabToView_::_1_::dtor$6 @ 0x1801D92AF (_TabViewManager--ConnectTabToView_--_1_--dtor$6.c)
 *     _TabViewManager::RemoveVirtualTabImpl_::_1_::dtor$2 @ 0x1801E4394 (_TabViewManager--RemoveVirtualTabImpl_--_1_--dtor$2.c)
 *     _wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_Windows::Internal::ComposableShell::Tabs::IShellTab_____ptr64_Windows::Foundation::Collections::IVectorView_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64______ptr64__::_1_::dtor$0 @ 0x18020A479 (_wil--MakeOrThrow_Windows--Internal--ComposableShell--Tabs--TabWindowSnappedWithOthersEventArgs_.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor$10 @ 0x18020E2A7 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--WindowSnapStateChanged_--_1_--dtor$10.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801BFA40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_1801BFA40.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs>::~ComPtr<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
