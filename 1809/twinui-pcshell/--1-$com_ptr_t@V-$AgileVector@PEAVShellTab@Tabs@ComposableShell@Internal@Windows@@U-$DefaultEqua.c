/*
 * XREFs of ??1?$com_ptr_t@V?$AgileVector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18020B0FC
 * Callers:
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor$3 @ 0x18020E247 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--WindowSnapStateChanged_--_1_--dtor$3.c)
 *     _cshell::make_agile_vector_unsigned_int__::_1_::dtor$0 @ 0x18022375D (_cshell--make_agile_vector_unsigned_int__--_1_--dtor$0.c)
 *     _cshell::make_agile_vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__::_1_::dtor$0 @ 0x180223831 (_cshell--make_agile_vector_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper_____ptr64_.c)
 *     _WindowingEnvironmentSettings::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x18022D8F2 (_WindowingEnvironmentSettings--get_RequestedDisplayRegionIds_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18020D080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_18020D080.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,0>,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
