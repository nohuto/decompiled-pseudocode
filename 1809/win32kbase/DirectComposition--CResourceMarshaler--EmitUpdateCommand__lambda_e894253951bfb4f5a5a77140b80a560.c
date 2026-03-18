/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___ @ 0x1C017154C
 * Callers:
 *     ?EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017172C (-EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     _lambda_e894253951bfb4f5a5a77140b80a5602_::operator() @ 0x1C01715E8 (_lambda_e894253951bfb4f5a5a77140b80a5602_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  _DWORD *v6; // rbx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 36;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x20uLL);
  *v6 = 277;
  v6[1] = *(_DWORD *)(a1 + 24);
  lambda_e894253951bfb4f5a5a77140b80a5602_::operator()(a3, v6);
  return 1;
}
