/*
 * XREFs of DxgkCreateAllocation @ 0x1C0110990
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1, __int64 a2, const GUID *a3)
{
  return DxgkCreateAllocationInternal(a1, 0LL, a3);
}
