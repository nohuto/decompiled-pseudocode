/*
 * XREFs of ?EmitUpdateCommands@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D514 (-EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemotingRenderTargetMarshaler *))(*(_QWORD *)this + 248LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemotingRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemotingRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 264LL))(
         this,
         a2) )
  {
    return DirectComposition::CRemotingRenderTargetMarshaler::EmitDestroyWindow(this, a2) != 0;
  }
  return v4;
}
