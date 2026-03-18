/*
 * XREFs of ?PrepareForReuse@CBaseRenderTarget@@UEAAXXZ @ 0x1802013C0
 * Callers:
 *     ?PrepareForReuse@CHwTextureRenderTarget@@WNA@EAAXXZ @ 0x1800F0F60 (-PrepareForReuse@CHwTextureRenderTarget@@WNA@EAAXXZ.c)
 * Callees:
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x1800DAED8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CBaseRenderTarget::PrepareForReuse(CBaseRenderTarget *this)
{
  CBaseRenderTarget::RemoveAssociations(this);
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
}
