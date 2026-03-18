/*
 * XREFs of FxStubDriverUnload @ 0x1C0039010
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0038F5C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C0062A18 && qword_1C0062A18 != FxStubDriverUnload )
    qword_1C0062A18();
  FxStubDriverUnloadCommon();
}
