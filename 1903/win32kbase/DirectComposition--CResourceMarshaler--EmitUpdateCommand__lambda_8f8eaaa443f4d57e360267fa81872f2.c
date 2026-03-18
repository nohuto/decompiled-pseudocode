/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___ @ 0x1C000A2FC
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BEE0 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 70;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 88LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 92LL);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 96LL);
  result = 1;
  *((_DWORD *)v5 + 6) = *(_DWORD *)(*(_QWORD *)a3 + 100LL);
  return result;
}
