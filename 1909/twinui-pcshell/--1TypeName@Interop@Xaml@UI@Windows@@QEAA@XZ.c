/*
 * XREFs of ??1TypeName@Interop@Xaml@UI@Windows@@QEAA@XZ @ 0x1802D6CEC
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::Markup::IXamlMetadataProvider]::GetXamlType_::_1_::dtor$0_0 @ 0x1802D7AFC (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_1802D7AFC.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Xaml::Interop::TypeName::~TypeName(HSTRING *this)
{
  WindowsDeleteString_0(*this);
}
