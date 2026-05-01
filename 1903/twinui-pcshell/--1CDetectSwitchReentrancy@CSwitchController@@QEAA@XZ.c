/*
 * XREFs of ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x18038C77C
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18038CC00 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     _CSwitchController::SwitchToApp_::_1_::dtor$0 @ 0x18038CD34 (_CSwitchController--SwitchToApp_--_1_--dtor$0.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18038CD60 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     _CSwitchController::SwitchToAppByIdWithArguments_::_1_::dtor$0 @ 0x18038CF08 (_CSwitchController--SwitchToAppByIdWithArguments_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy(
        CSwitchController::CDetectSwitchReentrancy *this)
{
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)this + 104LL), 0xFFFFFFFF) == 1 )
      *(_DWORD *)(*(_QWORD *)this + 108LL) = 0;
  }
}
