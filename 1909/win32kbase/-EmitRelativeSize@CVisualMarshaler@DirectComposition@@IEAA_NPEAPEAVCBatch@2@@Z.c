/*
 * XREFs of ?EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A8E0
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009D30 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRelativeSize(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x2000000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 20;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 1) = 500;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 22);
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 23);
    *((_DWORD *)this + 4) &= ~0x2000000u;
    return 1;
  }
  return 0;
}
