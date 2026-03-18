/*
 * XREFs of UnmapChildMmioSpace @ 0x1C00248D8
 * Callers:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B5D38 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

__int64 UnmapChildMmioSpace()
{
  return ((__int64 (*)(void))DxgCoreInterface[70])();
}
