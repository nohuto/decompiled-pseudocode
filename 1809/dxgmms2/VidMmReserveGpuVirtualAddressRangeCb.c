/*
 * XREFs of VidMmReserveGpuVirtualAddressRangeCb @ 0x1C000FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C006BE08 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 */

__int64 __fastcall VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *a1,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2)
{
  return VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(a1, a2);
}
