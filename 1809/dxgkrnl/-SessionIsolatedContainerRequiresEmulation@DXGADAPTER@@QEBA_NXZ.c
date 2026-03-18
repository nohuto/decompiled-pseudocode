/*
 * XREFs of ?SessionIsolatedContainerRequiresEmulation@DXGADAPTER@@QEBA_NXZ @ 0x1C0034D90
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SessionIsolatedContainerRequiresEmulation(DXGADAPTER *this)
{
  return *((_BYTE *)this + 2477) != 0;
}
