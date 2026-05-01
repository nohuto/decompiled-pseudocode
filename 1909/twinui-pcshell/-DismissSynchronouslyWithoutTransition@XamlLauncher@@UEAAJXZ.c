/*
 * XREFs of ?DismissSynchronouslyWithoutTransition@XamlLauncher@@UEAAJXZ @ 0x180311C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::DismissSynchronouslyWithoutTransition(XamlLauncher *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 31);
  if ( !v2 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2) )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 72LL))(*((_QWORD *)this + 31), 7LL);
  return 0LL;
}
