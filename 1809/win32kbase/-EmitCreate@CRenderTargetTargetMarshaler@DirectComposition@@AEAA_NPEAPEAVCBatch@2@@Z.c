/*
 * XREFs of ?EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008BB18
 * Callers:
 *     ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008BA30 (-EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitCreate(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char *v6; // rax
  char *v7; // rbx
  char *v8; // rcx
  char *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v10) )
      return 0;
    v6 = (char *)v10;
    *(_DWORD *)v10 = 48;
    v7 = v6 + 4;
    memset(v6 + 4, 0, 0x2CuLL);
    *(_DWORD *)v7 = 133;
    *((_DWORD *)v7 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 5) = 1;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 10);
    *((_QWORD *)v7 + 3) = *((_QWORD *)this + 6);
    *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)v7 + 8) = *((_DWORD *)this + 17);
    *((_DWORD *)v7 + 9) = *((_DWORD *)this + 18);
    *((_DWORD *)v7 + 10) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return 0;
    v8 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 134;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
  {
    v9 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 132;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 31);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}
