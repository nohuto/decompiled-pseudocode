/*
 * XREFs of ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x1800D2ED0
 * Callers:
 *     ?SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z @ 0x1800F0970 (-SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::SetDisplayId(__int64 a1, int a2)
{
  if ( a2 != *(_DWORD *)(a1 - 96) )
    *(_DWORD *)(a1 - 96) = a2;
}
