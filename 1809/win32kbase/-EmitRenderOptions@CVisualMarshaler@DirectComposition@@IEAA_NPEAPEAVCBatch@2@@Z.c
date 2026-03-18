/*
 * XREFs of ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B59C
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRenderOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rax
  _DWORD *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x8000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 52;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x30uLL);
    *v5 = 429;
    v5[1] = *((_DWORD *)this + 6);
    if ( *((_DWORD *)this + 55) != -1 )
    {
      v5[2] |= 2u;
      v5[3] = *((_DWORD *)this + 55);
    }
    if ( *((_DWORD *)this + 54) != -1 )
    {
      v5[2] |= 8u;
      v5[4] = *((_DWORD *)this + 54);
    }
    if ( *((_DWORD *)this + 56) != -1 )
    {
      v5[2] |= 0x10u;
      v5[7] = *((_DWORD *)this + 56);
    }
    if ( *((_DWORD *)this + 57) != -1 )
    {
      v5[2] |= 0x20u;
      v5[8] = *((_DWORD *)this + 57);
    }
    if ( *((_DWORD *)this + 58) != -1 )
    {
      v5[2] |= 0x40u;
      v5[9] = *((_DWORD *)this + 58);
    }
    if ( *((_DWORD *)this + 59) != -1 )
    {
      v5[2] |= 0x80u;
      v5[10] = *((_DWORD *)this + 59);
    }
    *((_DWORD *)this + 4) &= ~0x8000u;
    return 1;
  }
  return 0;
}
