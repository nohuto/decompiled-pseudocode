/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___ @ 0x1C000BE3C
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BEE0 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm1
  char result; // al
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v10) )
    return 0;
  v5 = (char *)v10;
  *(_DWORD *)v10 = 76;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x48uLL);
  *(_DWORD *)v6 = 74;
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 24);
  v7 = *a3;
  *(_OWORD *)(v6 + 8) = *(_OWORD *)(*a3 + 132);
  *(_OWORD *)(v6 + 24) = *(_OWORD *)(v7 + 148);
  *(_OWORD *)(v6 + 40) = *(_OWORD *)(v7 + 164);
  v8 = *(_OWORD *)(v7 + 180);
  result = 1;
  *(_OWORD *)(v6 + 56) = v8;
  return result;
}
