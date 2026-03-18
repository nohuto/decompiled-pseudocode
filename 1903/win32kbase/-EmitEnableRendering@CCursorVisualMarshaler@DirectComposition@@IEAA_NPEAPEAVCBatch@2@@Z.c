/*
 * XREFs of ?EmitEnableRendering@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA6B4
 * Callers:
 *     ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA810 (-EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::EmitEnableRendering(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 92) & 4) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 130;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    v3[12] = *((_BYTE *)this + 352);
    *((_DWORD *)this + 92) &= ~4u;
    return 1;
  }
  return 0;
}
