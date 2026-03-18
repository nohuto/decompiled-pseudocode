/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___ @ 0x1C0009434
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A720 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     _lambda_4cc0d3d1534267b95d1f770849d9af9d_::operator() @ 0x1C00094B0 (_lambda_4cc0d3d1534267b95d1f770849d9af9d_--operator().c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  _DWORD *v6; // rbx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 48;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x2CuLL);
  *v6 = 404;
  v6[1] = *(_DWORD *)(a1 + 24);
  lambda_4cc0d3d1534267b95d1f770849d9af9d_::operator()(a3, v6);
  return 1;
}
