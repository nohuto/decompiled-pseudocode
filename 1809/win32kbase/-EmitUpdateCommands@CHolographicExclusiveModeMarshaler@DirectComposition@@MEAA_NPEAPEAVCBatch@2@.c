/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveModeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017B860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicExclusiveModeMarshaler *))(*(_QWORD *)this
                                                                                                  + 248LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicExclusiveModeMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
             this,
             a2) != 0;
  return v4;
}
