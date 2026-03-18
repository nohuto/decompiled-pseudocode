/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00432DC
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0254080 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C02546C0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0254C70 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255100 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255680 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000CDB4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 (__fastcall **v3)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 216)
    && DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(v1 + 16))
    && v3[71] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    return 1;
  }
  return v2;
}
