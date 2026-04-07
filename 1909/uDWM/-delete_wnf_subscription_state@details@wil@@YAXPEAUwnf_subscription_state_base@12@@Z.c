/*
 * XREFs of ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800802B8
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004472C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x18008E8DC (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::delete_wnf_subscription_state(
        wil::details *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  if ( this )
    (**(void (__fastcall ***)(wil::details *, __int64))this)(this, 1LL);
}
