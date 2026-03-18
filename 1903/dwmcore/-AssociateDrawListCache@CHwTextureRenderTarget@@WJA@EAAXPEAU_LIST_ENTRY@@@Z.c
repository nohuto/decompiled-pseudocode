/*
 * XREFs of ?AssociateDrawListCache@CHwTextureRenderTarget@@WJA@EAAXPEAU_LIST_ENTRY@@@Z @ 0x1800EC7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::AssociateDrawListCache(__int64 a1, struct _LIST_ENTRY *a2)
{
  CHwDisplayRenderTarget::AssociateDrawListCache((CHwDisplayRenderTarget *)(a1 - 144), a2);
}
