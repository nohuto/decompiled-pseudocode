/*
 * XREFs of ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x18038A340
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803898C0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18038A364 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18038A54C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAppArrangementSingleTransitionTarget::_IsDragVisual(CAppArrangementSingleTransitionTarget *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 68);
  return ((v1 - 2) & 0xFFFFFFF9) == 0 && v1 != 6;
}
