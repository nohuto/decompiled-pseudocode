/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x18007C340
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800916FC (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?AddRef@CWARPDrawListEntry@@WII@EAAKXZ @ 0x1800F0900 (-AddRef@CWARPDrawListEntry@@WII@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F0BD0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@WHI@EAAKXZ @ 0x1800F0D00 (-AddRef@CD3DSurface@@WHI@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800F14D0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
