/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveModeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BF910
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitExclusiveOpacity@CHolographicExclusiveModeMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BF8A8 (-EmitExclusiveOpacity@CHolographicExclusiveModeMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
      return v2;
    v5 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *((_DWORD *)v5 + 1) = 189;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)v5 + 4) = *((_DWORD *)this + 12);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CHolographicExclusiveModeMarshaler::EmitExclusiveOpacity(this, a2) )
    return 1;
  return v2;
}
