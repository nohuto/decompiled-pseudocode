/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6cdaba966813d1d56f3a6d55481d2e02___ @ 0x1C01B88F4
 * Callers:
 *     ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8A50 (-EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6cdaba966813d1d56f3a6d55481d2e02___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 20;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 1) = 88;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  result = 1;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  return result;
}
