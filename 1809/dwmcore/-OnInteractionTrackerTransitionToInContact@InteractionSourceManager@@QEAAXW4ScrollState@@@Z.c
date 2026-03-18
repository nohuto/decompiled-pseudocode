/*
 * XREFs of ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801E57E8
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801A3020 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x18019C134 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1801E4FC8 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1801E5F44 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

CInteraction *__fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  CInteraction *result; // rax
  struct CManipulation *ActiveManipulation; // rax
  __int64 v6; // r9

  result = InteractionSourceManager::GetActiveInteraction(a1);
  if ( !a2 && result )
  {
    result = CInteraction::GetTelemetryDataNoRef(result);
    if ( result )
    {
      ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
      return (CInteraction *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 16LL))(
                               v6,
                               ((unsigned __int64)ActiveManipulation + 64) & -(__int64)(ActiveManipulation != 0LL));
    }
  }
  return result;
}
