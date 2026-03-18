/*
 * XREFs of DxgkCreateContextVirtual @ 0x1C00EA100
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E9B5C (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, __int64 a2, const GUID *a3)
{
  return DxgkCreateContextVirtualImpl(a1, 1, a3);
}
