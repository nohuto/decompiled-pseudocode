/*
 * XREFs of ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000D9F8
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitInsertChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  __int64 v6; // rbx
  int v7; // esi
  char *v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x4000) == 0 )
    return 1;
  v6 = *((_QWORD *)this + 20);
  v7 = 0;
  if ( !v6 )
  {
LABEL_9:
    *((_DWORD *)this + 4) = v2 & 0xFFFFBFFF;
    return 1;
  }
  while ( (*(_DWORD *)(v6 + 16) & 0x10) != 0 )
  {
LABEL_7:
    v6 = *(_QWORD *)(v6 + 168);
    ++v7;
    if ( !v6 )
    {
      v2 = *((_DWORD *)this + 4);
      goto LABEL_9;
    }
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    v8 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *(_QWORD *)(v8 + 4) = 0LL;
    *(_QWORD *)(v8 + 12) = 0LL;
    *((_DWORD *)v8 + 1) = 479;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v8 + 4) = v7;
    *(_DWORD *)(v6 + 16) |= 0x10u;
    goto LABEL_7;
  }
  return 0;
}
