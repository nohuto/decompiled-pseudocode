/*
 * XREFs of ?ApplyRenderState@CHWDrawListEntry@@UEBA_NPEAUIDrawListStateSink@@@Z @ 0x180059CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHWDrawListEntry::ApplyRenderState(CHWDrawListEntry *this, struct IDrawListStateSink *a2)
{
  if ( !*(_DWORD *)(*((_QWORD *)this + 17) + 16LL) )
    return 0;
  (*(void (__fastcall **)(struct IDrawListStateSink *, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, *((unsigned int *)this + 12));
  return 1;
}
