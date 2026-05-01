/*
 * XREFs of ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800853BC
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001BF40 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E821C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64_0_1_0___::GetMany_::_1_::dtor$1 @ 0x18020C0FE (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--ComposableSh_ea_18020C0FE.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64_0_1_0___::IndexOf_::_1_::dtor$1 @ 0x18020C4E3 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--ComposableSh_ea_18020C4E3.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0___::GetMany_::_1_::dtor$1 @ 0x18022845E (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_18022845E.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0___::IndexOf_::_1_::dtor$1 @ 0x180228DF3 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_180228DF3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1, const struct std::nothrow_t *a2)
{
  operator delete(a1, a2);
}
