/*
 * XREFs of ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802611F8
 * Callers:
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x180260A34 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1802610E0 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 *     ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802611D0 (-ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180182030 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180186038 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64 *)((char *)this + 448);
  v3 = *((_QWORD *)this + 56);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 400LL))(v3, 0LL);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 55);
  ReleaseInterface<ID2D1Geometry>(v1);
  *(_OWORD *)v4 = 0LL;
  std::shared_ptr<CRegion>::operator=((_QWORD *)this + 68, (__int64 *)v4);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  *((_BYTE *)this + 561) = 0;
}
