/*
 * XREFs of DxgkDestroyContext @ 0x1C0122850
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0122530 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContext(const struct _D3DKMT_DESTROYCONTEXT *a1, __int64 a2, const GUID *a3)
{
  return DxgkDestroyContextImpl(a1, 1, a3);
}
