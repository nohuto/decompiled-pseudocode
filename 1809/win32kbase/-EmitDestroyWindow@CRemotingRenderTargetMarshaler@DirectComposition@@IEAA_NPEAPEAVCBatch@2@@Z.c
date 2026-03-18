/*
 * XREFs of ?EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D514
 * Callers:
 *     ?EmitDeletionCommand@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D4D0 (-EmitDeletionCommand@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D670 (-EmitUpdateCommands@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitDestroyWindow(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 12;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 1) = 357;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return 0;
}
