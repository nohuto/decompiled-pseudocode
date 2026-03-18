/*
 * XREFs of ?ProcessSetAutomaticBoundsExpansion@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION@@@Z @ 0x1800D3F20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLayerVisual::ProcessSetAutomaticBoundsExpansion(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION *a3)
{
  *((_BYTE *)this + 576) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
