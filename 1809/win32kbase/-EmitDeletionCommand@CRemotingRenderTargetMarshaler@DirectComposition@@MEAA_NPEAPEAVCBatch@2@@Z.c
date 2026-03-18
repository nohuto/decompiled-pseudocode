/*
 * XREFs of ?EmitDeletionCommand@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005ABA0 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D514 (-EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char result; // al

  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x100u;
  result = DirectComposition::CRemotingRenderTargetMarshaler::EmitDestroyWindow(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, (struct DirectComposition::CBatch ***)a2);
  return result;
}
