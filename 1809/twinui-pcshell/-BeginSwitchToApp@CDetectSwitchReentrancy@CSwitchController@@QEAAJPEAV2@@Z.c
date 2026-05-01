/*
 * XREFs of ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x18032C9D4
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18032CCA0 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18032CE00 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
        CSwitchController::CDetectSwitchReentrancy *this,
        struct CSwitchController *a2)
{
  unsigned __int32 v2; // eax
  unsigned int v3; // edx

  *(_QWORD *)this = a2;
  v2 = _InterlockedIncrement((volatile signed __int32 *)a2 + 26);
  v3 = 0;
  if ( v2 > 1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 108LL), 1u);
    return (unsigned int)-2147019873;
  }
  return v3;
}
