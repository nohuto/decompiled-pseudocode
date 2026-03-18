/*
 * XREFs of ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180237E4C
 * Callers:
 *     ?NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800C55C0 (-NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x1800C5670 (-NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@Interaction.c)
 *     ?NotifyCaptureManipulation@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I_K@Z @ 0x1802386B0 (-NotifyCaptureManipulation@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I_K@Z.c)
 *     ?NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z @ 0x1802387D0 (-NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1802388F0 (-NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Tempora.c)
 *     ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180239C4C (-QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCV.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

CManipulationManager::InteractionUpdate *__fastcall CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        CManipulationManager::InteractionUpdate *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  operator delete(this);
  return this;
}
