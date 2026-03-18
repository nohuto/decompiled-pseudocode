/*
 * XREFs of FxStubDriverUnload @ 0x1C003D490
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C003D3DC (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C0067A38 && qword_1C0067A38 != FxStubDriverUnload )
    qword_1C0067A38();
  FxStubDriverUnloadCommon();
}
