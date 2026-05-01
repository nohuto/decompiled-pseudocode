/*
 * XREFs of ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x1800017D4
 * Callers:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002404 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006730 (_guard_dispatch_icall_nop.c)
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
