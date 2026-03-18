/*
 * XREFs of ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A507C
 * Callers:
 *     ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A53D0 (-EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

char __fastcall DirectComposition::CInkMarshaler::EmitBasicStateUpdate(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 56;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x34uLL);
    *(_DWORD *)v4 = 209;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 40);
    *((_DWORD *)v4 + 6) = *((_DWORD *)this + 14);
    *(_OWORD *)(v4 + 28) = *(_OWORD *)((char *)this + 60);
    *(_QWORD *)(v4 + 44) = *(_QWORD *)((char *)this + 76);
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return 0;
}
