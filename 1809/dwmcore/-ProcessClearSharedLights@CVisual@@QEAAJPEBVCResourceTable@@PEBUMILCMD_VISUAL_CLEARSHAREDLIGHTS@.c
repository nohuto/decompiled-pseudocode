/*
 * XREFs of ?ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_CLEARSHAREDLIGHTS@@@Z @ 0x1801B77C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessClearSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_CLEARSHAREDLIGHTS *a3)
{
  return CVisual::RemoveAllSharedLights(this, 0LL, a3);
}
