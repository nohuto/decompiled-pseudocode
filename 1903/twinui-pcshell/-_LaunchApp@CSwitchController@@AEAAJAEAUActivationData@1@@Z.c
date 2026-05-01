/*
 * XREFs of ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18038D624
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18038CC00 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18038CD60 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x18038D700 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 */

__int64 __fastcall CSwitchController::_LaunchApp(CSwitchController *this, struct CSwitchController::ActivationData *a2)
{
  struct IDelayedAppActivation *v2; // r8
  __int64 result; // rax

  v2 = (struct IDelayedAppActivation *)*((_QWORD *)a2 + 4);
  result = 0LL;
  if ( v2 )
    return CSwitchController::_PerformDelayedActivationInternal(
             this,
             *((struct IImmersiveApplication **)a2 + 3),
             v2,
             0LL);
  return result;
}
