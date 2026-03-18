/*
 * XREFs of ??$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z @ 0x1801685B0
 * Callers:
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x18016895C (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?NotifyTreeDirtyRegion@CRemoteAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801A5CF0 (-NotifyTreeDirtyRegion@CRemoteAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1802474D0 (-NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?NotifyTreeDirtyRegion@CLocalAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180250720 (-NotifyTreeDirtyRegion@CLocalAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<CDirtyRegion const,CDirtyRegion const>(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD))
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = (__int64)a2;
  if ( a2 )
    return (**a2)(a2);
  return result;
}
