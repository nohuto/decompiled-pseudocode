/*
 * XREFs of ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x180075660
 * Callers:
 *     ?SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z @ 0x1800F1050 (-SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::SetDisplayId(__int64 a1, int a2)
{
  if ( a2 != *(_DWORD *)(a1 - 92) )
    *(_DWORD *)(a1 - 92) = a2;
}
