/*
 * XREFs of ?ApplyRenderState@CStateSettingDrawListEntry@@UEBA_NPEAUIDrawListStateSink@@@Z @ 0x180017500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CStateSettingDrawListEntry::ApplyRenderState(
        CStateSettingDrawListEntry *this,
        struct IDrawListStateSink *a2)
{
  (**(void (__fastcall ***)(struct IDrawListStateSink *, _QWORD))a2)(a2, *((_QWORD *)this + 3));
  return 0;
}
