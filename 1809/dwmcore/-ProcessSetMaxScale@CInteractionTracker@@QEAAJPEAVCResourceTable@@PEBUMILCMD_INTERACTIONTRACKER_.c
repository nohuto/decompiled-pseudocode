/*
 * XREFs of ?ProcessSetMaxScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXSCALE@@@Z @ 0x1801A0B2C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A20EC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetMaxScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMAXSCALE *a3)
{
  CInteractionTracker::SetMaxScale(this, *((float *)a3 + 2));
  return 0LL;
}
