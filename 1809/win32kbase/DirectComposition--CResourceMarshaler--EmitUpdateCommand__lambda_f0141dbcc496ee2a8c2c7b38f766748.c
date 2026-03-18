/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f0141dbcc496ee2a8c2c7b38f7667488___ @ 0x1C0175C60
 * Callers:
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008810 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f0141dbcc496ee2a8c2c7b38f7667488___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 252;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  result = 1;
  *((_DWORD *)v5 + 3) = *(unsigned __int8 *)(*(_QWORD *)a3 + 369LL);
  return result;
}
