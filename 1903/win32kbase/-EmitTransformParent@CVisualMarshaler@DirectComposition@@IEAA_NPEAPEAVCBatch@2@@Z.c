/*
 * XREFs of ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000D720
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitTransformParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // al
  int v5; // ecx
  char *v6; // rdx
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  v4 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8);
  v5 = 0;
  if ( v4 )
  {
    v6 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_QWORD *)(v6 + 12) = 0LL;
    *((_DWORD *)v6 + 1) = 506;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    v7 = *((_QWORD *)this + 16);
    if ( v7 )
      v5 = *(_DWORD *)(v7 + 24);
    *((_DWORD *)v6 + 3) = v5;
    v6[16] = *((_BYTE *)this + 265) & 1;
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}
