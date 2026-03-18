/*
 * XREFs of ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CCursorVisualMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 296LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CCursorVisualMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 304LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CCursorVisualMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 312LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CCursorVisualMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 320LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CCursorVisualMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 328LL))(
             this,
             a2) != 0;
  }
  return v4;
}
