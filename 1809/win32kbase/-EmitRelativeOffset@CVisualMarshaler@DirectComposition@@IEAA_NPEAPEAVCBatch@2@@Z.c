/*
 * XREFs of ?EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BA14
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRelativeOffset(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rax
  char *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x800000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 36;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x20uLL);
    *(_DWORD *)v5 = 427;
    *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
    *((double *)v5 + 1) = *((float *)this + 19);
    *((double *)v5 + 2) = *((float *)this + 20);
    *((double *)v5 + 3) = *((float *)this + 21);
    *((_DWORD *)this + 4) &= ~0x800000u;
    return 1;
  }
  return 0;
}
