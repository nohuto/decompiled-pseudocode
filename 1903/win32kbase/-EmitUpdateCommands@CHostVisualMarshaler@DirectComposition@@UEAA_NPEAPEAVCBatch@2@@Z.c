/*
 * XREFs of ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00952F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHostVisualMarshaler::EmitUpdateCommands(
        __m128i *this,
        struct DirectComposition::CBatch **a2)
{
  char updated; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  updated = DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2);
  if ( updated && (this[22].m128i_i32[0] & 1) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 493;
      *((_DWORD *)v5 + 2) = this[1].m128i_i32[2];
      this[22].m128i_i32[0] &= ~1u;
    }
    else
    {
      return 0;
    }
  }
  return updated;
}
