/*
 * XREFs of ?SetOverlayStretchSupported@ADAPTER_RENDER@@QEAAXIE@Z @ 0x1C0034DA4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::SetOverlayStretchSupported(ADAPTER_RENDER *this, unsigned int a2, char a3)
{
  if ( a2 < 0x10 )
    *((_BYTE *)this + a2 + 968) = a3;
}
