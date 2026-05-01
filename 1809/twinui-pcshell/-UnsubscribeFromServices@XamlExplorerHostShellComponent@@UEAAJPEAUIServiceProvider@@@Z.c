/*
 * XREFs of ?UnsubscribeFromServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025B530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::UnsubscribeFromServices(
        XamlExplorerHostShellComponent *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v2 + 56LL))(v2, a2);
  return 0LL;
}
