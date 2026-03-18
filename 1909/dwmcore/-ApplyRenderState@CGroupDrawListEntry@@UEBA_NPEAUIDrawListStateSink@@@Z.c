/*
 * XREFs of ?ApplyRenderState@CGroupDrawListEntry@@UEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800C3530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGroupDrawListEntry::ApplyRenderState(CGroupDrawListEntry *this, struct IDrawListStateSink *a2)
{
  if ( *((_DWORD *)this + 8) != 24 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_BYTE *)this + 36) != 3 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(struct IDrawListStateSink *, CGroupDrawListEntry *))(*(_QWORD *)a2 + 16LL))(a2, this);
  return 1;
}
