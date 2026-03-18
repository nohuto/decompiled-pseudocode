/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0412413edbf58ce26f59a106e8eda893___ @ 0x1C01C3E08
 * Callers:
 *     ?EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C45B0 (-EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0412413edbf58ce26f59a106e8eda893___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 344;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  result = 1;
  *(_OWORD *)(v5 + 12) = *(_OWORD *)(*(_QWORD *)a3 + 132LL);
  return result;
}
