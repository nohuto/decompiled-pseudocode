/*
 * XREFs of ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BC1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitCaptureState@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BC014 (-EmitCaptureState@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContentSize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BC07C (-EmitContentSize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitIsConstrainedBySize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BC0EC (-EmitIsConstrainedBySize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BC158 (-EmitTransform@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return v2;
    v5 = (char *)v9;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 35;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 5);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 24);
    else
      v7 = 0;
    *((_DWORD *)v5 + 3) = v7;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCaptureControllerMarshaler::EmitCaptureState(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitContentSize(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitTransform(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitIsConstrainedBySize(this, a2) )
  {
    return 1;
  }
  return v2;
}
