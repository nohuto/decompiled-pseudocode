/*
 * XREFs of ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18021F834
 * Callers:
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801DDC94 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x1801D7094 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801DAB20 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18021E9E0 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18021F990 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::TelemetrySetPosition(InteractionSourceManager *this, __int64 a2)
{
  CInteraction *v4; // r10
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rdi
  struct CManipulation *ActiveManipulation; // rax

  InteractionSourceManager::GetActiveInteraction(this);
  if ( InteractionSourceManager::HasActiveManipulation(this) && v4 && a2 )
  {
    TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(v4);
    if ( TelemetryDataNoRef )
    {
      ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
      (*(void (__fastcall **)(struct IManipulationTelemetryData *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)TelemetryDataNoRef + 24LL))(
        TelemetryDataNoRef,
        ((unsigned __int64)ActiveManipulation + 64) & -(__int64)(ActiveManipulation != 0LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 168LL),
        a2);
    }
  }
}
