/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a19___ @ 0x1C015AB54
 * Callers:
 *     ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C015ADE0 (-EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     _lambda_6c4d9031ee459ab96e0a644511042a19_::operator() @ 0x1C015AD78 (_lambda_6c4d9031ee459ab96e0a644511042a19_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a19___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rax
  _DWORD *v6; // rbx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 76;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x48uLL);
  *v6 = 37;
  v6[1] = *(_DWORD *)(a1 + 24);
  lambda_6c4d9031ee459ab96e0a644511042a19_::operator()(a3, v6);
  return 1;
}
