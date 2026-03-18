/*
 * XREFs of ?EmitCreate@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009A798
 * Callers:
 *     ?EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009A450 (-EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitCreate(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v7) )
  {
    v4 = (char *)v7;
    *(_DWORD *)v7 = 44;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x28uLL);
    *v5 = 143;
    v6 = *((_DWORD *)this + 6);
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[1] = v6;
    v5[7] = 1065353216;
    v5[9] = 1;
    v5[8] = *((_DWORD *)this + 12);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
