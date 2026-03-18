/*
 * XREFs of ?EmitSetNormalLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B85E8
 * Callers:
 *     ?EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B9270 (-EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSceneMeshMarshaler::EmitSetNormalLayoutCommand(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x8000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 623;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 28);
    *((_DWORD *)this + 4) &= ~0x8000u;
    return 1;
  }
  return 0;
}
