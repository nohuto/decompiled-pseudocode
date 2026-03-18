/*
 * XREFs of DxgkEnumAdapters2 @ 0x1C00CE870
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CE890 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters2(struct _D3DKMT_ENUMADAPTERS2 *a1)
{
  return DxgkEnumAdapters2Impl(a1, 1, 1u, UserRequest);
}
