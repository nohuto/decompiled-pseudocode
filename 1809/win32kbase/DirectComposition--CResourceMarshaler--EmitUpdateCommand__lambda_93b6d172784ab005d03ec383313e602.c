/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_93b6d172784ab005d03ec383313e6029___ @ 0x1C007D608
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007D580 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_93b6d172784ab005d03ec383313e6029_::operator() @ 0x1C007D674 (_lambda_93b6d172784ab005d03ec383313e6029_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_93b6d172784ab005d03ec383313e6029___(
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
  *((_DWORD *)v5 + 1) = 155;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  lambda_93b6d172784ab005d03ec383313e6029_::operator()(a3);
  return 1;
}
