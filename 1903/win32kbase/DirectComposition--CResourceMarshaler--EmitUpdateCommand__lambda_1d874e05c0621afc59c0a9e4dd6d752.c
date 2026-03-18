/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1d874e05c0621afc59c0a9e4dd6d7528___ @ 0x1C01B567C
 * Callers:
 *     ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B6170 (-EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1d874e05c0621afc59c0a9e4dd6d7528___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 24;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 316;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  v6 = *a3;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*a3 + 404);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(v6 + 412);
  return 1;
}
