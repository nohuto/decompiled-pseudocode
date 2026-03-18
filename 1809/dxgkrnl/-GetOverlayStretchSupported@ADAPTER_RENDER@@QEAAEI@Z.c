/*
 * XREFs of ?GetOverlayStretchSupported@ADAPTER_RENDER@@QEAAEI@Z @ 0x1C0034B88
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C012E988 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_RENDER::GetOverlayStretchSupported(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this) && (unsigned int)v2 < 0x10 )
    return *((_BYTE *)this + v2 + 968);
  else
    return 0;
}
