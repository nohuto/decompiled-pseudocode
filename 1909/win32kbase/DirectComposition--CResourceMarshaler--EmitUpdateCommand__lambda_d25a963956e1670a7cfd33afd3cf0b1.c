/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___ @ 0x1C01B11E8
 * Callers:
 *     ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B1310 (-EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___(
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
  *((_DWORD *)v5 + 1) = 444;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 100LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 104LL);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 108LL);
  result = 1;
  *((_DWORD *)v5 + 6) = *(_DWORD *)(*(_QWORD *)a3 + 112LL);
  return result;
}
