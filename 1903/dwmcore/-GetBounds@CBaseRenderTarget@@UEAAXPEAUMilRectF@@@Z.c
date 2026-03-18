/*
 * XREFs of ?GetBounds@CBaseRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800D9CE0
 * Callers:
 *     ?GetBounds@CHwTextureRenderTarget@@WJA@EAAXPEAUMilRectF@@@Z @ 0x1800ECB00 (-GetBounds@CHwTextureRenderTarget@@WJA@EAAXPEAUMilRectF@@@Z.c)
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
