/*
 * XREFs of ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x1801A0AA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::ProcessSetManipulations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        const struct MarshaledManipulationInfo *a4,
        unsigned int a5)
{
  if ( 8LL * *((unsigned int *)a3 + 2) == a5 )
    return InteractionSourceManager::ProcessSetManipulations((CInteractionTracker *)((char *)this + 192), a2, a3, a4);
  else
    return 2291663875LL;
}
