/*
 * XREFs of DxgkEvict @ 0x1C00F55A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00F4BC8 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

__int64 __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1, __int64 a2, const GUID *a3)
{
  return DxgkEvictInternal(a1, 1, a3);
}
