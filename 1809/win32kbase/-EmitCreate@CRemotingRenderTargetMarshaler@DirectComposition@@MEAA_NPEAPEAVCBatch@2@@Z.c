/*
 * XREFs of ?EmitCreate@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D430
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitCreate(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v3; // esi
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  v3 = 0;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x28uLL, &v8) )
  {
    v4 = (char *)v8;
    *(_DWORD *)v8 = 40;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x24uLL);
    *(_DWORD *)v5 = 356;
    *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 6);
    if ( v6 )
      v3 = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 2) = v3;
    *(_OWORD *)(v5 + 20) = *((_OWORD *)this + 4);
    *(_QWORD *)(v5 + 12) = *((_QWORD *)this + 5);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
