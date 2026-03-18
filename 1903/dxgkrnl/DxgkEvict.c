/*
 * XREFs of DxgkEvict @ 0x1C0133070
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0133090 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 */

__int64 __fastcall DxgkEvict(__int64 a1)
{
  return DxgkEvictInternal(a1, 1LL, 0xFFFFFFFFLL, 0LL);
}
