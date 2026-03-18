/*
 * XREFs of ?ProcessSetAutomaticBoundsExpansion@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION@@@Z @ 0x180075318
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLayerVisual::ProcessSetAutomaticBoundsExpansion(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION *a3)
{
  *((_BYTE *)this + 576) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
