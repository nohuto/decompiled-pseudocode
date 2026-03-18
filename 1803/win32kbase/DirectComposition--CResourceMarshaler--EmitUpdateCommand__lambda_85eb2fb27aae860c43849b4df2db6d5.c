/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d53___ @ 0x1C000D9E0
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F4A0 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     _lambda_85eb2fb27aae860c43849b4df2db6d53_::operator() @ 0x1C0011BEC (_lambda_85eb2fb27aae860c43849b4df2db6d53_--operator().c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d53___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  _DWORD *v6; // rbx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 52;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x30uLL);
  *v6 = 335;
  v6[1] = *(_DWORD *)(a1 + 24);
  lambda_85eb2fb27aae860c43849b4df2db6d53_::operator()(a3, v6);
  return 1;
}
