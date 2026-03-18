/*
 * XREFs of ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x1801D7094
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801D75A0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021F0C4 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021F230 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18021F834 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z @ 0x1801D6BB8 (--0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z.c)
 */

struct IManipulationTelemetryData *__fastcall CInteraction::GetTelemetryDataNoRef(CInteraction *this)
{
  CManipulationTelemetryData *v1; // rbx
  __int64 v3; // rsi
  CManipulationTelemetryData *v4; // rax
  CManipulationTelemetryData *v5; // rax
  __int64 v6; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CManipulationTelemetryData *)*((_QWORD *)this + 216);
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 7);
    if ( v3 )
    {
      v4 = (CManipulationTelemetryData *)DefaultHeap::AllocClear(0xB8uLL);
      if ( !v4 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      v5 = CManipulationTelemetryData::CManipulationTelemetryData(
             v4,
             *((struct CComposition **)this + 3),
             *(_DWORD *)(v3 + 16));
      v1 = v5;
      if ( v5 )
        (**(void (__fastcall ***)(CManipulationTelemetryData *))v5)(v5);
      v6 = *((_QWORD *)this + 216);
      *((_QWORD *)this + 216) = v1;
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        return (struct IManipulationTelemetryData *)*((_QWORD *)this + 216);
      }
    }
  }
  return v1;
}
