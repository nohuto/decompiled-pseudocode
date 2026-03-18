/*
 * XREFs of VidMmInvalidateAllVirtualAddresses @ 0x1C0024A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ACD78 (-InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmInvalidateAllVirtualAddresses(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::InvalidateAllVirtualAddresses(a1);
}
