/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C003CA7C
 * Callers:
 *     DxgkCreateOverlay @ 0x1C021FAE0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0220160 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0220700 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0220BA0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0221190 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
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
    && v3[72] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[80] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    return 1;
  }
  return v2;
}
