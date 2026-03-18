/*
 * XREFs of ?EmitCreate@COverlayRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BBD2C
 * Callers:
 *     ?EmitUpdateCommands@COverlayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BBE30 (-EmitUpdateCommands@COverlayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

char __fastcall DirectComposition::COverlayRenderTargetMarshaler::EmitCreate(
        DirectComposition::COverlayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 36;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x20uLL);
    *(_DWORD *)v4 = 290;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 10);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 11);
    *((_QWORD *)v4 + 2) = *((_QWORD *)this + 6);
    *((_DWORD *)v4 + 6) = *((_DWORD *)this + 14);
    *((_DWORD *)v4 + 7) = *((_DWORD *)this + 15);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
