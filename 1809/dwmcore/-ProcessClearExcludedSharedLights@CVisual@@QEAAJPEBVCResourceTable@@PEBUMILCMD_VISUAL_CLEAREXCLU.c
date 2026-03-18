/*
 * XREFs of ?ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS@@@Z @ 0x1801B77B0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessClearExcludedSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS *a3)
{
  return CVisual::RemoveAllSharedLights(this, 1LL, a3);
}
