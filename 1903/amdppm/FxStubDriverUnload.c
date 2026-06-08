/*
 * XREFs of FxStubDriverUnload @ 0x1C0001D10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0001C64 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C00133D8 && qword_1C00133D8 != FxStubDriverUnload )
    qword_1C00133D8();
  FxStubDriverUnloadCommon();
}
