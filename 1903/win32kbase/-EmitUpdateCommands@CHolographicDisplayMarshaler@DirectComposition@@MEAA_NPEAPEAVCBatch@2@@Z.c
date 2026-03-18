/*
 * XREFs of ?EmitUpdateCommands@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BF770
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitCreate@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BF688 (-EmitCreate@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitFlags@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BF704 (-EmitFlags@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
      return v2;
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 289;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CHolographicDisplayMarshaler::EmitCreate(this, a2)
    && DirectComposition::CHolographicDisplayMarshaler::EmitFlags(this, a2) )
  {
    return 1;
  }
  return v2;
}
