/*
 * XREFs of ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800754EC
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180077054 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180078278 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800E8CE4 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyZoomDelta(ControllerProcessor *this)
{
  float v1; // xmm0_4
  __int64 v3; // rdx

  v1 = *((float *)this + 579);
  if ( v1 == 0.0 )
  {
    if ( ((*((_DWORD *)this + 785) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    v3 = 16LL;
    if ( v1 <= 1.0 )
      v3 = 32LL;
    ControllerProcessor::TryUpdateInteractionType(this, v3);
    if ( ((*((_DWORD *)this + 785) - 16) & 0xFFFFFFEF) == 0 )
      ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 2328), *((float *)this + 579), 0);
    *((_DWORD *)this + 579) = 0;
  }
  return 0LL;
}
