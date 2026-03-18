/*
 * XREFs of ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801DE620
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800ED2F4 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800ED4E0 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DD8CC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::ProcessSetTrackerBindingMode(
        CInteractionTrackerBindingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE *a3)
{
  unsigned int v5; // edx
  _DWORD *Resource; // rbp
  CInteractionTracker *v8; // rax
  struct CInteractionTracker *v9; // rdi
  int v10; // ebx

  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
    return 2291663875LL;
  if ( !*((_DWORD *)a3 + 3) )
    return 2291663875LL;
  Resource = (_DWORD *)CResourceTable::GetResource((__int64)a2, v5, 0x58u);
  v8 = (CInteractionTracker *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x58u);
  v9 = v8;
  if ( !Resource || !v8 )
    return 2291663875LL;
  v10 = *((_DWORD *)a3 + 4);
  CInteractionTrackerBindingManager::BringBoundTrackersStateInSync((int)this, (__int64)Resource, v8, v10);
  CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
    (int)this,
    (__int64)Resource,
    (int)v9,
    v10);
  CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(this, Resource, v9, v10);
  return 0LL;
}
