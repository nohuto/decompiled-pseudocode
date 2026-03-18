/*
 * XREFs of ?GetBounds@CBaseRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800E7820
 * Callers:
 *     ?GetBounds@CHwTextureRenderTarget@@WNA@EAAXPEAUMilRectF@@@Z @ 0x1800F0E40 (-GetBounds@CHwTextureRenderTarget@@WNA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseRenderTarget::GetBounds(CBaseRenderTarget *this, struct MilRectF *a2)
{
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((float *)a2 + 2) = (float)*((int *)this + 2);
  *((float *)a2 + 3) = (float)*((int *)this + 3);
}
