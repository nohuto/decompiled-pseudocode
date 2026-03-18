/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6288d291273792cde85e9051fd01e069___ @ 0x1C0009DDC
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009C90 (-EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6288d291273792cde85e9051fd01e069___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  char result; // al
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v10) )
    return 0;
  v5 = (char *)v10;
  *(_DWORD *)v10 = 36;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x20uLL);
  *(_DWORD *)v6 = 70;
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 24);
  v7 = *a3;
  *(_OWORD *)(v6 + 8) = *(_OWORD *)(*a3 + 92);
  v8 = *(_QWORD *)(v7 + 108);
  result = 1;
  *((_QWORD *)v6 + 3) = v8;
  return result;
}
