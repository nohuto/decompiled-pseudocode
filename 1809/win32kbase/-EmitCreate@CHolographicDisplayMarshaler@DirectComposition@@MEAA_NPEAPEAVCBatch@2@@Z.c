/*
 * XREFs of ?EmitCreate@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitCreate(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) == 3 && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 36;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x20uLL);
    *(_DWORD *)v4 = 182;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *(_OWORD *)(v4 + 8) = *((_OWORD *)this + 4);
    *((_QWORD *)v4 + 3) = *((_QWORD *)this + 7);
    *((_DWORD *)this + 12) |= 0x80000000;
  }
  return 1;
}
