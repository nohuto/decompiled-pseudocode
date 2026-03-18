/*
 * XREFs of ?EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C1270
 * Callers:
 *     ?EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C1320 (-EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

bool __fastcall DirectComposition::CColorMatrixEffectMarshaler::EmitData(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x64uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 100;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x60uLL);
  *(_DWORD *)v4 = 551;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  *((_DWORD *)v4 + 22) = *((_DWORD *)this + 42);
  *((_DWORD *)v4 + 23) = *((_DWORD *)this + 43);
  result = 1;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 88);
  *(_OWORD *)(v4 + 24) = *(_OWORD *)((char *)this + 104);
  *(_OWORD *)(v4 + 40) = *(_OWORD *)((char *)this + 120);
  *(_OWORD *)(v4 + 56) = *(_OWORD *)((char *)this + 136);
  *(_OWORD *)(v4 + 72) = *(_OWORD *)((char *)this + 152);
  return result;
}
