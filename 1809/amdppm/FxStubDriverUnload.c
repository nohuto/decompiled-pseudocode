/*
 * XREFs of FxStubDriverUnload @ 0x1C0001430
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0001384 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C00113B8 && qword_1C00113B8 != FxStubDriverUnload )
    qword_1C00113B8();
  FxStubDriverUnloadCommon();
}
