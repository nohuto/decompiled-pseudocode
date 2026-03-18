/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800E6D40
 * Callers:
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800ECA50 (-AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@WHI@EAAKXZ @ 0x1800ECA60 (-AddRef@CD3DSurface@@WHI@EAAKXZ.c)
 *     ?AddRef@CWARPDrawListEntry@@WJA@EAAKXZ @ 0x1800ED440 (-AddRef@CWARPDrawListEntry@@WJA@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800ED9C0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
