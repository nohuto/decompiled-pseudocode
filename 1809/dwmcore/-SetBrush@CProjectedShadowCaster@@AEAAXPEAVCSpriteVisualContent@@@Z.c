/*
 * XREFs of ?SetBrush@CProjectedShadowCaster@@AEAAXPEAVCSpriteVisualContent@@@Z @ 0x1801AE000
 * Callers:
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x1801ADC00 (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCAST.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::SetBrush(CProjectedShadowCaster *this, struct CSpriteVisualContent *a2)
{
  struct CSpriteVisualContent *v4; // rcx

  v4 = (struct CSpriteVisualContent *)*((_QWORD *)this + 14);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct CSpriteVisualContent *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
}
