/*
 * XREFs of ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0081B84
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0062CBC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B7E44 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadByStartAddressAvl(struct _RTL_BALANCED_NODE **a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( *a1 == a2[1].Children[0] )
    return 0LL;
  else
    return *a1 < a2[1].Children[0] ? -1 : 1;
}
