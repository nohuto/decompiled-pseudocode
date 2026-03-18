/*
 * XREFs of ?EmitUpdateCommands@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016E010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicInteropTextureMarshaler *))(*(_QWORD *)this + 248LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicInteropTextureMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicInteropTextureMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 264LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicInteropTextureMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 272LL))(
             this,
             a2) != 0;
  }
  return v4;
}
