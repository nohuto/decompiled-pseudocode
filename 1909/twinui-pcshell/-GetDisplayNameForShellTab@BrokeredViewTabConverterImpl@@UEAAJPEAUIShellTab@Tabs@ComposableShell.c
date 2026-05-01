/*
 * XREFs of ?GetDisplayNameForShellTab@BrokeredViewTabConverterImpl@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1802439A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::GetDisplayNameForShellTab(
        BrokeredViewTabConverterImpl *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        HSTRING *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, HSTRING *))(**((_QWORD **)this + 8) + 192LL))(
           *((_QWORD *)this + 8),
           a2,
           a3);
}
