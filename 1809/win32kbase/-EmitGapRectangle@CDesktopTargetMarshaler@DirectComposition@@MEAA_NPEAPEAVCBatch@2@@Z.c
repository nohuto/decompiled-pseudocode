/*
 * XREFs of ?EmitGapRectangle@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0093020
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitGapRectangle(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *(_QWORD *)(v4 + 20) = 0LL;
    *((_DWORD *)v4 + 1) = 143;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *(_OWORD *)(v4 + 12) = *((_OWORD *)this + 5);
    *((_DWORD *)this + 4) &= ~0x800u;
    return 1;
  }
  return 0;
}
