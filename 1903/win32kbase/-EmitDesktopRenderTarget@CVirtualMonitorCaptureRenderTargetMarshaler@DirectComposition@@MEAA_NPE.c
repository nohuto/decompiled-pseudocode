/*
 * XREFs of ?EmitDesktopRenderTarget@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BF090
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitDesktopRenderTarget(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v3; // edi
  char *v4; // rax
  _DWORD *v5; // rsi
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    return 1;
  v3 = 0;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v8) )
  {
    v4 = (char *)v8;
    *(_DWORD *)v8 = 36;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x20uLL);
    *v5 = 469;
    v5[1] = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 14);
    if ( v6 )
      v3 = *(_DWORD *)(v6 + 24);
    v5[2] = v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
    return 1;
  }
  return 0;
}
