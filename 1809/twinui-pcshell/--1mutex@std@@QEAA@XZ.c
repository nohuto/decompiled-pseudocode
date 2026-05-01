/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x18025EE74
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$3 @ 0x18025EA40 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_18025EA40.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
