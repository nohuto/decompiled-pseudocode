/*
 * XREFs of ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0169C7C
 * Callers:
 *     ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0169FE0 (-EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CInkMarshaler::EmitBasicStateUpdate(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // rcx
  double *v6; // rbx
  float *v7; // rax
  float v8; // xmm0_4
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x50uLL, &v10) )
  {
    v3 = (char *)v10;
    *(_DWORD *)v10 = 80;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x4CuLL);
    *(_DWORD *)v4 = 204;
    v5 = 6LL;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 40);
    *((_DWORD *)v4 + 6) = *((_DWORD *)this + 14);
    v6 = (double *)(v4 + 28);
    v7 = (float *)((char *)this + 60);
    do
    {
      v8 = *v7++;
      *v6++ = v8;
      --v5;
    }
    while ( v5 );
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return 0;
}
