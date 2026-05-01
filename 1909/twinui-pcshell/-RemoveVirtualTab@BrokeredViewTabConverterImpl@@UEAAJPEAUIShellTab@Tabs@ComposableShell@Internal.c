/*
 * XREFs of ?RemoveVirtualTab@BrokeredViewTabConverterImpl@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180243CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::RemoveVirtualTab(
        BrokeredViewTabConverterImpl *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 8) + 72LL))(
           *((_QWORD *)this + 8),
           a2);
}
