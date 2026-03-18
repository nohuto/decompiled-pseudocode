/*
 * XREFs of ?EmitUpdateCommands@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005B6AC (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicCompositionMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 248LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicCompositionMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 256LL))(
             this,
             a2) != 0;
  }
  return v4;
}
