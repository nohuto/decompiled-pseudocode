/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180119464
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0___::Clear_::_1_::dtor$0 @ 0x18020B719 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewManagerInterop.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0___::RemoveAtInternal_::_1_::dtor$1 @ 0x18020D36F (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_18020D36F.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64_0_1_0___::SetAt_::_1_::dtor$2 @ 0x18020D867 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--ComposableSh_ea_18020D867.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0___::SetAt_::_1_::dtor$2 @ 0x18022BA97 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_18022BA97.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64___::Clear_::_1_::dtor$0 @ 0x1802B17C6 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--ComposableSh_ea_1802B17C6.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64___::RemoveAtInternal_::_1_::dtor$1 @ 0x1802B2AFA (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--ComposableSh_ea_1802B2AFA.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64___::SetAt_::_1_::dtor$2 @ 0x1802B2E23 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--ComposableSh_ea_1802B2E23.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
    *a1 = 0LL;
  }
}
