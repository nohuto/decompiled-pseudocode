/*
 * XREFs of ?EmitSetSharedSection@CSharedSectionWrapperMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B6DFC
 * Callers:
 *     ?EmitUpdateCommands@CSharedSectionWrapperMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B6E80 (-EmitUpdateCommands@CSharedSectionWrapperMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSharedSectionWrapperMarshaler::EmitSetSharedSection(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  int v4; // edx
  char *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v8;
    *(_DWORD *)v8 = 24;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 1) = 433;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 5);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 3) = v4;
    *((_DWORD *)v5 + 4) = *((_DWORD *)this + 12);
    *((_DWORD *)v5 + 5) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return 0;
}
