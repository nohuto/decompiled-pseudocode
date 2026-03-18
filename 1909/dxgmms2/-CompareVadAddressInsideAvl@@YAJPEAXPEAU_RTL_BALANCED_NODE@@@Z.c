/*
 * XREFs of ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00827B0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074040 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00B9CC0 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadAddressInsideAvl(struct _RTL_BALANCED_NODE **a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( *a1 < a2[1].Children[0] )
    return 0xFFFFFFFFLL;
  else
    return *a1 >= a2[1].Children[1];
}
