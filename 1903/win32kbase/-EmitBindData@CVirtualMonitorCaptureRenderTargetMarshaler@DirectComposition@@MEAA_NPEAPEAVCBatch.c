/*
 * XREFs of ?EmitBindData@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BEF60
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitBindData(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x2000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 60;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x38uLL);
    *(_DWORD *)v4 = 470;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *((_QWORD *)v4 + 1) = *((_QWORD *)this + 21);
    *((_OWORD *)v4 + 1) = *(_OWORD *)((char *)this + 136);
    v4[32] = *((_BYTE *)this + 180);
    *((_DWORD *)v4 + 9) = *((_DWORD *)this + 44);
    *(_OWORD *)(v4 + 40) = *(_OWORD *)((char *)this + 152);
    *((_DWORD *)this + 4) &= 0xFFFF9FFF;
    return 1;
  }
  return 0;
}
