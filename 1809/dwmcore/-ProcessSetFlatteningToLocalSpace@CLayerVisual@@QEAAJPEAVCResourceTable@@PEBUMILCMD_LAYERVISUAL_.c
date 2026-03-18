/*
 * XREFs of ?ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE@@@Z @ 0x1801A4A38
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLayerVisual::ProcessSetFlatteningToLocalSpace(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE *a3)
{
  *((_BYTE *)this + 577) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
