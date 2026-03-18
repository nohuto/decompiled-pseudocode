/*
 * XREFs of ?EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017C560
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitFlipManager(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  void *v3; // rcx
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
  {
    v3 = (void *)*((_QWORD *)this + 12);
    if ( !v3 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v3, &v6) < 0 )
      v6 = 0LL;
    v4 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 1) = 46;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v4 + 12) = v6;
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
