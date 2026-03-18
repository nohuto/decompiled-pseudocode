/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___ @ 0x1C008FE7C
 * Callers:
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008FDA0 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___(
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
  *((_DWORD *)v5 + 1) = 253;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  result = 1;
  *((_DWORD *)v5 + 3) = *(unsigned __int8 *)(*(_QWORD *)a3 + 360LL);
  return result;
}
