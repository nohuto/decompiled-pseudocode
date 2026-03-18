/*
 * XREFs of ?EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009E068
 * Callers:
 *     ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009DF70 (-EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
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
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v10) )
      return 0;
    v6 = (char *)v10;
    *(_DWORD *)v10 = 60;
    v7 = v6 + 4;
    memset(v6 + 4, 0, 0x38uLL);
    *(_DWORD *)v7 = 137;
    *((_DWORD *)v7 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 6) = 1;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 10);
    *((_QWORD *)v7 + 4) = *((_QWORD *)this + 6);
    *((_QWORD *)v7 + 2) = *((_QWORD *)this + 7);
    *((_DWORD *)v7 + 10) = *((_DWORD *)this + 17);
    *((_DWORD *)v7 + 11) = *((_DWORD *)this + 18);
    v7[48] = *((_DWORD *)this + 20) != 0;
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
    *((_DWORD *)v8 + 1) = 139;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
  {
    v9 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 136;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 32);
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return 0;
}
