/*
 * XREFs of ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C0BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::EmitUpdateCommands(
        __m128i *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // edi
  char *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) || (this[22].m128i_i32[0] & 1) == 0 )
    return 0;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
  {
    v5 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 410;
    *((_DWORD *)v5 + 2) = this[1].m128i_i32[2];
    v6 = this[21].m128i_i64[1];
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 3) = v4;
    this[22].m128i_i32[0] &= ~1u;
  }
  return 1;
}
