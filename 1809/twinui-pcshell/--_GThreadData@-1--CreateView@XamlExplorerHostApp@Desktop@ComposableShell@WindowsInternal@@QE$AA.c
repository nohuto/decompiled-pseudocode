/*
 * XREFs of ??_GThreadData@?1??CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@345@@Z@QEAAPEAXI@Z @ 0x18025F324
 * Callers:
 *     std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___ @ 0x18025EC50 (std--unique_ptr__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2.c)
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x18025F024 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x18025EA78 (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18025EE84 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

_BYTE *__fastcall `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView'::`2'::ThreadData::`scalar deleting destructor'(
        _BYTE *a1)
{
  if ( a1[48] )
  {
    a1[48] = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)(a1 + 24));
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_((_QWORD *)a1 + 3);
  operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
