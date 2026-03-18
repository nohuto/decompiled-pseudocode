/*
 * XREFs of ?EmitSetAngleCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B7554
 * Callers:
 *     ?EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B90B0 (-EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRotateTransform3DMarshaler::EmitSetAngleCommand(
        DirectComposition::CRotateTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 596;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
