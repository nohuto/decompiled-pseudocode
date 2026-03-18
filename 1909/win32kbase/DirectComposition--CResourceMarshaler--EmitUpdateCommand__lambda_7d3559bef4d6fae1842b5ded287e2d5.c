/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d56___ @ 0x1C008D3C8
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008D340 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_7d3559bef4d6fae1842b5ded287e2d56_::operator() @ 0x1C008D434 (_lambda_7d3559bef4d6fae1842b5ded287e2d56_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d56___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 20;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 1) = 159;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  lambda_7d3559bef4d6fae1842b5ded287e2d56_::operator()(a3);
  return 1;
}
