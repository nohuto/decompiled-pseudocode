/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0001AC4
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001B54 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( &__KMDF_CLASS_BIND_START > &__KMDF_CLASS_BIND_END )
    return 3221225595LL;
  return result;
}
