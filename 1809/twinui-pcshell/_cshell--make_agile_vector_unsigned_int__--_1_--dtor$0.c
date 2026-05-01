/*
 * XREFs of _cshell::make_agile_vector_unsigned_int__::_1_::dtor$0 @ 0x18022375D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@V?$AgileVector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18020B0FC (--1-$com_ptr_t@V-$AgileVector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqua.c)
 */

__int64 __fastcall cshell::make_agile_vector_unsigned_int__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,0>,wil::err_exception_policy>(*(__int64 **)(a2 + 80));
  }
  return result;
}
