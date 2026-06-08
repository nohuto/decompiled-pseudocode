/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003514
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00033D4 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( &__KMDF_CLASS_BIND_START > &__KMDF_CLASS_BIND_END )
    return 3221225595LL;
  return result;
}
