/*
 * XREFs of ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18023673C
 * Callers:
 *     ?NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800C50F0 (-NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x1800C51A0 (-NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@Interaction.c)
 *     ?NotifyCaptureManipulation@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I_K@Z @ 0x180236FA0 (-NotifyCaptureManipulation@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I_K@Z.c)
 *     ?NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z @ 0x1802370C0 (-NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1802371E0 (-NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Tempora.c)
 *     ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18023853C (-QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCV.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
