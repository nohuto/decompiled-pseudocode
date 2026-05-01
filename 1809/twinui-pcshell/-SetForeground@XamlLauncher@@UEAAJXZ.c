/*
 * XREFs of ?SetForeground@XamlLauncher@@UEAAJXZ @ 0x18029CAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::SetForeground(XamlLauncher *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 28);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
  return 0LL;
}
