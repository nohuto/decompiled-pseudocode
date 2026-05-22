/*
 * XREFs of ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x18007533C
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180077054 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180078278 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyPanDelta(ControllerProcessor *this)
{
  if ( *((float *)this + 577) == 0.0 && *((float *)this + 578) == 0.0 )
  {
    if ( *((_DWORD *)this + 785) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    ControllerProcessor::TryUpdateInteractionType(this, 1LL);
    if ( *((_DWORD *)this + 785) == 1 )
      ManipulationInjector::InjectPan(
        (ControllerProcessor *)((char *)this + 2328),
        *((float *)this + 577),
        *((float *)this + 578),
        0);
    *((_DWORD *)this + 577) = 0;
    *((_DWORD *)this + 578) = 0;
  }
  return 0LL;
}
