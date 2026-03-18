/*
 * XREFs of ?PrepareForReuse@CBaseRenderTarget@@UEAAXXZ @ 0x180160E70
 * Callers:
 *     ?PrepareForReuse@CHwTextureRenderTarget@@WJA@EAAXXZ @ 0x1800F08B0 (-PrepareForReuse@CHwTextureRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x18004A0E8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CBaseRenderTarget::PrepareForReuse(CBaseRenderTarget *this)
{
  CBaseRenderTarget::RemoveAssociations(this);
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
}
