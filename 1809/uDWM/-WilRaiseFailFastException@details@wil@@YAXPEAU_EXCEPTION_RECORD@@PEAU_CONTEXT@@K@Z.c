/*
 * XREFs of ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x180071E6C
 * Callers:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180071DD0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn wil::details::WilRaiseFailFastException(
        struct _EXCEPTION_RECORD *this,
        struct _EXCEPTION_RECORD *a2,
        struct _CONTEXT *a3)
{
  if ( wil::details::g_pfnRaiseFailFastException )
    wil::details::g_pfnRaiseFailFastException(this, 0LL, (unsigned int)a3);
  __fastfail(7u);
}
