/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c7b9fb34a118bc588d649f38d06a4036___ @ 0x1C0019558
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001AA50 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c7b9fb34a118bc588d649f38d06a4036___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm1
  char result; // al
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v9) )
    return 0;
  v5 = (char *)v9 + 4;
  *(_DWORD *)v9 = 76;
  memset(v5, 0, 0x48uLL);
  *v5 = 76;
  v5[1] = *(_DWORD *)(a1 + 24);
  v6 = *a3;
  *(_OWORD *)(v5 + 2) = *(_OWORD *)(*a3 + 120);
  *(_OWORD *)(v5 + 6) = *(_OWORD *)(v6 + 136);
  *(_OWORD *)(v5 + 10) = *(_OWORD *)(v6 + 152);
  v7 = *(_OWORD *)(v6 + 168);
  result = 1;
  *(_OWORD *)(v5 + 14) = v7;
  return result;
}
