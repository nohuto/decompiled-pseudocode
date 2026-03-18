/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5b4e224a8459b45f36348a3014f7bb1___ @ 0x1C0009898
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009770 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5b4e224a8459b45f36348a3014f7bb1___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  bool v5; // al
  int v6; // r9d
  char *v7; // rdx
  __int64 v8; // rcx
  char result; // al
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v10);
  v6 = 0;
  if ( !v5 )
    return 0;
  v7 = (char *)v10;
  *(_DWORD *)v10 = 32;
  *(_QWORD *)(v7 + 4) = 0LL;
  *(_QWORD *)(v7 + 12) = 0LL;
  *(_QWORD *)(v7 + 20) = 0LL;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 1) = 452;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  if ( v8 )
    v6 = *(_DWORD *)(v8 + 24);
  *((_DWORD *)v7 + 3) = v6;
  result = 1;
  *((_OWORD *)v7 + 1) = *(_OWORD *)(*(_QWORD *)a3 + 72LL);
  return result;
}
