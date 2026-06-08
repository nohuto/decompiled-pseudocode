/*
 * XREFs of FxStubDriverUnload @ 0x1C0007AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007A74 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C001B370 && qword_1C001B370 != FxStubDriverUnload )
    qword_1C001B370();
  FxStubDriverUnloadCommon(a1);
}
