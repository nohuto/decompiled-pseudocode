/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade6___ @ 0x1C000E730
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C7B0 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade6___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  bool v5; // al
  int v6; // r9d
  char *v7; // rdx
  __int64 v8; // rcx
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10);
  v6 = 0;
  if ( !v5 )
    return 0;
  v7 = (char *)v10;
  *(_DWORD *)v10 = 16;
  *(_QWORD *)(v7 + 4) = 0LL;
  *((_DWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 1) = 365;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 280LL);
  if ( v8 )
    v6 = *(_DWORD *)(v8 + 24);
  *((_DWORD *)v7 + 3) = v6;
  return 1;
}
